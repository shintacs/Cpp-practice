//例外の送出と補足

#include <new>
#include <iostream>

using namespace std;

//オーバーフロークラス//
class OverFlow { };

//xの２倍を返す//
int f(int x)
{
    if(x < 0)
        throw "おかしい。値が負になっている！\n";
    else if(x > 30000)
        throw OverFlow();
    else
        return 2 * x;
}

int main()
{
    int a;
    cout << "整数: ";
    cin >> a;

    try {
        int b = f(a);
        cout << "その数の２倍は" << b << "です。\n";
    }
    catch (const char* str){
        cout << "例外発生: " << str;
    }
    catch (OverFlow) {
        cout << "オーバーフローしました。プログラムを終了します。\n";
        return 1;
    }
}