#include <string>
#include <iostream>
#include "Accounting.h"

using namespace std;

Accounting::Accounting(string name, long amnt)
{
    full_name = name;
    crnt_asset = amnt;
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
    Accounting nakano("中野隼人", 1000);
    Accounting yamada("山田宏文", 200);

    nakano.spend(200);
    yamada.earn(100);

    cout << "中野: \"" << nakano.name() << "\" " << nakano.asset() << "円\n";
    cout << "山田: \"" << yamada.name() << "\" " << yamada.asset() << "円\n";
}