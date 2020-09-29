#ifndef ___Class_Accounting
#define ___Class_Accounting

#include <string>
#include "Date.h"

class Accounting{
    std::string full_name;//氏名
    long crnt_asset;      //資産
    Date birth;           //誕生日

public:
    Accounting(const std::string& name, long amnt, const Date& op);

    void earn(long amnt);
    void spend(long amnt);

    std::string name() const {return full_name;}
    long asset() const       {return crnt_asset;}
    Date birthday() const    {return birth;}
};

#endif