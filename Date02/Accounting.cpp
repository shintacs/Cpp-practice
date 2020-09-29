//会計クラス
#include <string>
#include <iostream>
#include "Date.h"
#include "Accounting.h"

using namespace std;

Accounting::Accounting(const string& name, long amnt, const Date& op) : full_name(name), crnt_asset(amnt), birth(op) //birth(y, m, d)はコンストラクタ初期化子
{
    /*full_name = name;
    crnt_asset = amnt;*/
    //birth = Date(y, m, d);コンストラクタ初期化子がない場合、このコードが必要となる。
    //しかし、この場合Date型の一時オブジェクトの初期化とbirthへの代入の２つの動作が行われているため冗長。
}

void Accounting::earn(long amnt)
{
    crnt_asset += amnt;
}

void Accounting::spend(long amnt)
{
    crnt_asset -= amnt;
}

int main(){
    Accounting nakano("中野隼人", 1000, Date(2125, 1, 24));

    string dw[] = {"日", "月", "火", "水" , "木" ,"金" , "土"};

    cout << "中野君\n";
    cout << "氏名=" << nakano.name() << '\n';
    cout << "資産=" << nakano.asset() << "円\n";
    cout << "誕生日=" << nakano.birthday();
    cout << " (" << dw[nakano.birthday().day_of_week()] << ") \n";
}

//クラスAccountingはその部分としてDateクラスをもつ。(has-Aの関係)
//コンポジション

//クラス型のデータメンバは、コンストラクタ本体の中で値を代入するのではなく、コンストラクタ初期化しによって初期化すべき。(8行目)