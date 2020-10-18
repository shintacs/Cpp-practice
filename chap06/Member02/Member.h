//一般会員クラス　第２版//
#ifndef ___Member
#define ___Member

#include <string>

//一般会員クラス//
class Member {
    std::string full_name;
    int number;
    double weight;
public:
    //コンストラクタ//
    Member(const std::string& name, int no, double w)
    //full_nameのゲッタ//
    std::string name() const { return full_name; }
    //numberのゲッタ//
    int no() const { return number; }
    //weightのゲッタ//
    void set_weight(double w) { weight = (w > 0) ? w : 0; }
    //会員情報表示//
    virtual void print() const;
};

#endif 