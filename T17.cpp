//
// Created by 杨敬华 on 2022/11/6.
//谓词
#include "iostream"
#include "set"
#include "algorithm" //算法包
using namespace std;
//谓词  == 彷函数
class CompareObject{
public:
    void operator()(){
        cout<<"彷函数"<<endl;
    }
};
void fun2(){
    cout<<"普通函数"<<endl;
}
int main17(){
    CompareObject fun1;
    fun1();
    fun2();
    return 0;
}
