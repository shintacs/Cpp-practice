//オーバーライドとオーバーロード
#include <iostream>

using namespace std;

class A {
public:
    void f() { cout << "A::f()\n"; } //非仮想関数
};

class B : public A {
public:
    virtual void f() { cout << "B::f()\n"; } //仮想関数
};

class C : public B {
public:
    void f() { cout << "C::f()\n"; } //仮想関数のオーバーライド
    void f(int) { cout << "C::f(int)\n"; } //オーバーロード
};

int main()
{
    A a;
    B b;
    C c;
    A* p = &b;
    B* q = &c;

    a.f();
    b.f();
    c.f();
    c.f(1);
    p->f();
    q->f();
    //q->f(1);
}
