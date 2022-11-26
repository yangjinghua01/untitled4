//宏学习
// Created by 杨敬华 on 2022/11/26.
/**
 * TODO 预处理器不是编译器 预处理起主要完成文本替换的操作（文本替换，以后专门在Linux中去讲，预处理起都是用#XXX的写法，并不是注释）
 * #include 导入头文件
 * #if if操作
 * #elif else if
 * #else else if
 * #else else
 * endif 结束if
 * #define 定义一个宏
 * #ifdef 如果定义了这个宏
 * # ifndef 如果没有定义这个宏
 * #undef 取消宏定义
 * #pragma 设定编译器的状态
 */
#include "iostream"

using namespace std;

int main() {
#if 1
    cout << "真" << endl;
#elif 0
    cout<<"假"<<endl;
#else
    cout<<"都为假"<<endl;
#endif
    cout << "结束if" << endl;
    return 0;
}


