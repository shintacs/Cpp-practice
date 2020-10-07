//試作版・優待会員クラスの利用例

#include <iostream>
#include "VipMember0.h"

using namespace std;

int main()
{
    VipMember0 kaneda("金田正太郎", 17, 89.2, "会費全額免除");

    double weight = kaneda.get_weight();
    kaneda.set_weight(weight - 3.7);

    cout << "会員番号" << kaneda.no() << "の" << kaneda.name() << "は" << kaneda.get_weight() << "kgで" << "特典は" << kaneda.get_privilege() << "です。\n";
}