//
// Created by 杨敬华 on 2022/11/3.
// 静态多态 在编译期就能决定哪个函数 这个就是属于静态多态
#include "iostream"
using namespace  std;
void add(int  number1,int number2){
    cout<<number1+number2<<endl;
}
void add(float  number1,float  number2){
    cout<<number1+number2<<endl;
}
void add(double  number1,double  number2){
    cout<<number1+number2<<endl;
}
int main32442434334(){
    add(199,300);
    add(1.0f,2.3f);
    add(544.4,343.33);
    return 0;
}
