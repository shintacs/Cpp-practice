//初期化と代入・値渡しと参照渡しの検証
//どうしてクラス型の引数に”値渡し”ではなく、”参照渡し”をするのかがわかるコード（参考になる！）
//検証ようなので実用性はなし

#include <iostream>

using namespace std;

class Test{
public:
    Test(){//デフォルトコンストラクタ
        cout << "初期化：Test()\n";
    }
    Test(const Test& t){//コピーコンストラクタ
        cout << "初期化：Test(const Test(const Test&)\n";
    }

    Test& operator=(const Test& t){//代入演算子
        cout << "代　入：Test = Test\n"; return *this;
    }
};

void value(Test a){}//コンストラクタが呼び出される

void reference(Test& a){}//コンストラクタは呼び出されない

int main()
{
    Test x;       //デフォルトコンストラクタ
    Test y = x;   //コピーコンストラクタ
    Test z(x);    //コピーコンストラクタ
    y = x;        //代入演算子
    value(x);     //関数呼び出し（値渡し）
    reference(x); //関数呼び出し（参照渡し）
}

//クラス型の引数を参照渡しにすると、値渡しに比べて初期化や代入の処理がない分、コストが安く済むよって話。記憶域の大きいクラスや、動的な記憶域を確保するクラスを扱うとなるとその差は大きくなる。