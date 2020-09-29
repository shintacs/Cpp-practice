#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std; //ソース部だからusingを使って良い。

//デフォルトコンストラクタ
Date::Date()
{
    time_t current = time(NULL);                //現在の暦時刻を取得
    struct tm* local = localtime(&current);     //要素別の時刻に変換

    y = local->tm_year + 1900;       //年
    m = local->tm_mon + 1;           //月
    d = local->tm_mday;              //日      
}  

//コンストラクタ
Date::Date(int yy, int mm, int dd)
{
    y = yy;
    m = mm;
    d = dd;
}

Date Date::preceding_day() const
{
    /*int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Date temp = *this;

    if(temp.d > 1)
        temp.d--;
    else{
        if(--temp.m < 1){
            temp.y--;
            temp.m = 12;
        }
        temp.d = dmax[temp.m - 1];
    }
    return temp;*/

    //thisを使って書き換えたもの
    int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y = this->y;
    int m = this->m;
    int d = this->d;

    if(d > 1)
        d--;
    else{
        if(--m < 1){
            y--;
            m = 12;
        }
        d = dmax[m - 1];
    }
    return Date(y, m, d);

}

//文字列表現を返却
string Date::to_string() const
{
    ostringstream s;
    s << y << "年" << m << "月" << d << "日";
    return s.str();
}

//曜日を返却
int Date::day_of_week() const
{
    int yy = y;
    int mm = m;
    if(mm == 1 || mm == 2){
        yy--;
        mm += 12;
    }
    return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

ostream & operator<<(ostream& s, const Date& x) //?この挿入子が使われる場合はどうやって記述すればいいんだっけ?
{
    return s << x.to_string();
}

istream& operator>>(istream& s, Date& x)
{
    int yy, mm, dd;
    char ch;

    s >> yy >> ch >> mm >> ch >> dd;
    x = Date(yy, mm, dd);
    return s;
}

/*int main()
{
    const Date birthday(1963, 11, 18);
    Date day[3];

    cout << "birthday = " << birthday << '\n';
    cout << "birthdayの文字列表現:\"" << birthday.to_string() << "\"\n";

    for(int i = 0; i < 3; i++)
        cout << "day[" << i << "]の文字列表現:\"" << day[i].to_string() << "\"\n";
}*/
