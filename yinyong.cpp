//
// Created by 杨敬华 on 2022/11/20.
// 引用复习
#include<iostream>
using namespace std;
//1、不要返回局部变量的引用
int& test01(){
    int a = 10; //局部变量存放在栈区，在函数调用完后，内存会被系统自动回收
    return a;
}

//2、函数的调用可以作为左值
int& test02(){
    static int a = 10;//静态变量存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}

int main78(){
//    const int &a = 101;
//    printf("value%d\n",a);
    int ref = test01();
    cout << "ref"<<ref << endl;//10  编译器做了一次保留
    cout << ref << endl;//2068503352  乱码，这时栈区已经将数据自动回收了
    int &ref02 = test02();
    cout << ref02 << endl;//10
    cout << ref02 << endl;//10
    test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
    cout << ref02 << endl;//1000
    cout << ref02 << endl;//1000
    system("pause");
    return EXIT_SUCCESS;
}

