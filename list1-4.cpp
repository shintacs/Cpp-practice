//クラス定義の外にメンバ関数定義を置く
#include <string>
#include <iostream>

using namespace std;

class Accounting{
    string full_name;
    long crnt_asset;
public:
    Accounting(string name, long amnt);

    string name(){return full_name;};
    long asset(){return crnt_asset;};

    void earn(long amnt);
    void spend(long amnt);
};

Accounting::Accounting(string name, long amnt){
    full_name = name;
    crnt_asset = amnt;
}

void Accounting::earn(long amnt){
    crnt_asset += amnt;
}

void Accounting::spend(long amnt){
    crnt_asset -= amnt;
}

int main(){
    Accounting nakano("中野隼人", 1000);
    Accounting yamada("山田宏文", 200);

    nakano.spend(200);
    yamada.earn(100);

    cout << "中野: \"" << nakano.name() << "\" " << nakano.asset() << "円\n";
    cout << "山田: \"" << yamada.name() << "\" " << yamada.asset() << "円\n";
}

