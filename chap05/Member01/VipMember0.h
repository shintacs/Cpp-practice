//試作版・優待会員クラス

#ifndef ___VipMember0
#define ___VipMember0

#include <string>

//試作版・優待会員クラス//
class VipMember0 {
    std::string full_name;
    int number;
    double weight;
    std::string privilege; //特典

public:
    //コンストラクタ//
    VipMember0(const std::string& name, int no, double w, const std::string& prv);
    //full_nameのゲッタ//
    std::string name() const { return full_name; }
    //numberのゲッタ//
    int no() const { return number; }
    //weightのゲッタ//
    double get_weight() const { return weight; }
    //weightのせった
    void set_weight(double w) { weight = (w > 0) ? w : 0; }
    //会員情報取得//
    void print() const;
    //privilegeのゲッタ//
    std::string get_privilege() const { return privilege; }
    //privilegeのセッタ//
    void set_privilege(const std::string& prv) {
        privilege = (prv != "") ? prv : "未登録";
    }
};

#endif