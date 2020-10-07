//優待会員クラス（一般会員クラスMemberの派生クラスとして実現）
#ifndef ___VipMember
#define ___VipMember

#include <string>
#include "Member.h"

//優待会員クラス
class VipMember : public Member {
    std::string privilege; //特典
public:
    //コンストラクタ//
    VipMember(const std::string& name, int no, double w, const std::string& prv);
    //会員情報表示//
    void print() const;
    //privilegeのゲッタ
    std::string get_privilege() const { return privilege; }
    //privilegeのセッタ
    void set_privilege(const std::string& prv) {
        privilege = (prv != "") ? prv : "未登録";
    }
};

#endif