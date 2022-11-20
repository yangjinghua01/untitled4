//
// Created by 杨敬华 on 2022/11/20.
//
#include "iostream"

using namespace std;

void test(int a = 10) {
    cout << a << endl;
}

void test2(int a, int b = 10, int c = 1) {
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
void test3(int){
    printf("执行函数test3:");
}

int main77() {
    int num = 101;
//    传入参数
    test(num);
//    不使用参数
    test();
    cout<<"多个参数==============================================="<<endl;
    test2(num);//未传入全部参数
    test2(1,2,3);//传入全部参数
    test3(2);
    return 0;
}


