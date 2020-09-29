//日付クラスDate

#ifndef ___Class_Date
#define ___Class_Date  //3,4行目はインクルードガード（ヘッダーインクルードの重複を防ぐ。）

#include <string>
#include <iostream>

class Date{
    int y;
    int m;
    int d;

public:
    Date();                                //デフォルトコンストラクタ
    Date(int yy, int mm = 1, int dd = 1); //コンストラクタ

    int year()  const{return y;}
    int month() const{return m;}
    int day()   const{return d;}

    Date preceding_day() const;   //前日の日付を返却 ?なぜconstを使っているのか?

    std::string to_string() const; //文字列表現を返却
    int day_of_week() const;       //曜日の返却
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s, Date& x);

#endif