//スライシングの例

#include <iostream>
#include "BaseDerived.h"

using namespace std;

int main()
{
    Base bs(99, 99); //基底クラス

    cout << "bsの初期状態\n";
    bs.func();

    Derived dv(1, 2, 3);//派生クラス

    bs = dv;            //スライシング
    cout << "dvを代入した後\n";
    bs.func();

}

//基底クラスオブジェクトに対する派生クラスオブジェクトの代入はコンパイルエラーとならない（スライシング）