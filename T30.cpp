//
// Created by 杨敬华 on 2022/11/13.
//
#include "iostream"
#include "CustomPtr.h"
#include "memory"
using namespace std;

class Persion {
public:
//    weak_ptr<Persion2> persion2;

    ~Persion() {
        cout << "Persionq1 析构函数执行" << endl;
    }
};
void action(){
    Persion * student = new Persion();
    Persion * student1 = new Persion();
    shared_ptr<Persion>sharedPtr1(student);
    shared_ptr<Persion>sharedPtr2(student1);
    cout<<"智能指针内置的"<<sharedPtr1.use_count()<<endl;
    cout<<"智能指针内置的"<<sharedPtr2.use_count()<<endl;
}
void action2(){
    Persion * student = new Persion();
    Persion * student1 = new Persion();
    Pet<Persion>sharedPtr1(student);
    Pet<Persion>sharedPtr2(student1);
    cout<<"手写智能指针内置的"<<sharedPtr1.use_count()<<endl;
    cout<<"手写智能指针内置的"<<sharedPtr2.use_count()<<endl;
}

int main(){
    cout <<"内置智能指针执行"<<endl;
    action();
    cout<<"手写智能指针执行"<<endl;
    action2();
    return 0;
}

