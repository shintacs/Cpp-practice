#ifndef ___Class_Counter
#define ___Class_Counter

#include <limits>

class Counter{
    unsigned cnt;

public:
    Counter() : cnt(0) {}   //コンストラクタ

    void increment() {if (cnt < std::numeric_limits<unsigned>::max()) cnt++;} //カウントアップ

    void decrement() {if(cnt > 0) cnt--;} //カウントダウン

    //unsigned value() {return cnt;}
    operator unsigned() const {return cnt; }

    bool operator!() const {return cnt == 0;}

    Counter& operator++() {
        if(cnt < std::numeric_limits<unsigned>::max()) cnt++;
        return *this;
    }

    Counter operator++(int){
        Counter x = *this;
        ++(*this);
        return x;
    }

    Counter& operator--(){
        if(cnt > 0) cnt--;
        return *this;
    }

    Counter operator--(int){
        Counter x = *this;
        --(*this);
        return x;
    }
};

#endif