//
// Created by 杨敬华 on 2022/11/3.
//2.虚继承 二义性
#include "iostream"
using namespace std;

//祖父类
class Object{
public:
    string  info;
};
//父类1/2
class Base1 : virtual public Object{

};
class Base2 : virtual public Object{

};
class Main1 :public Base1,public Base2{

};
int main1(){
    Object object;//栈区开辟，就会有一个this指针，假设指针是1000H会有指向的能力
    Base1 base1;//栈区开辟，就会有一个this指针，假设指针是1000H会有指向的能力
    Base2 base2;//栈区开辟，就会有一个this指针，假设指针是1000H会有指向的能力
    Main1 main1;//栈区开辟，就会有一个this指针，假设指针是1000H会有指向的能力
    object.info ='A';
    base1.info='B';
    base2.info='C';
    main1.info='D';
    cout<<object.info<<endl;
    cout<<base1.info<<endl;
    cout<<base2.info<<endl;
    cout<<main1.info<<endl;
    exit(0);
    return 0;
}

