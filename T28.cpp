//
// Created by 杨敬华 on 2022/11/13.
//智能指针循环依赖的问题
//TODO 智能指针解决循环依赖的问题，weak 该智能指针没有引用计数
#include "iostream"

using namespace std;

class Persion2;

class Persion {
public:
//    weak_ptr<Persion2> persion2;

    ~Persion() {
        cout << "Persionq1 析构函数执行" << endl;
    }
};

class Persion2 {
public:
//    weak_ptr<Persion> persionq1;

    ~Persion2() {
        cout << "Persion2 析构函数" << endl;
    }
};

int main28() {
    Persion *persionq1 = new Persion();
    Persion2 *persion2 = new Persion2();
    shared_ptr<Persion> sharedPtr1(persionq1);
    shared_ptr<Persion2> sharedPtr2(persion2);
    cout<<"前sharedPtr1的引用计数是："<<sharedPtr1.use_count()<<endl;
    cout<<"前sharedPtr2的引用计数是："<<sharedPtr2.use_count()<<endl;
//    persionq1->persion2=sharedPtr2;
//    persion2->persionq1 = sharedPtr1 ;
    cout<<"后sharedPtr1的引用计数是："<<sharedPtr1.use_count()<<endl;
    cout<<"后 sharedPtr2的引用计数是："<<sharedPtr2.use_count()<<endl;
    return 0;
}
