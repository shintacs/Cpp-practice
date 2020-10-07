//一般会員クラスと優待会員クラスを利用する

 #include <iostream>
 #include "Member.h"
 #include "VipMember0.h"

 using namespace std;

 //一般会員mの減量
 void slim_off(Member& m, double dw)
 {
     double weight = m.get_weight();
     if(weight > dw)
        m.set_weight(weight - dw);
 }

 //優待会員mの減量
 void slim_off(VipMember0& m, double dw)
 {
     double weight = m.get_weight(); //体重の取得
     if(weight > dw)
        m.set_weight(weight - dw); //体重の更新
 }

 int main()
 {
     Member kaneko("金子健太", 15, 75.2);
     VipMember0 kaneda("金田正太郎", 17, 89.2, "会費全額免除");

     slim_off(kaneko, 3.7);
     cout << "No." << kaneko.no() << ":" << kaneko.name() << " (" << kaneko.get_weight() << "kg) \n";

     slim_off(kaneda, 15.3);
     cout << "No." << kaneda.no() << ":" << kaneda.name() << " (" << kaneda.get_weight() << "kg) " << "特典=" << kaneda.get_privilege() << '\n';
 }