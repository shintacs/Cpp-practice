//退会済み会員クラス
#include <iostream>
#include "ResigningMember.h"

using namespace std;

int main()
{
    ResigningMember oda("織田信子", 31, 48.7);

    cout << "番号=" << oda.no() << '\n';
    cout << "体重=" << oda.get_weight();
}