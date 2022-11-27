//
// Created by 杨敬华 on 2022/11/27.
//宏函数
#include "iostream"

using namespace std;
#define SHOW(V) cout<<V<<endl;  //参数列表无需类型 返回值看不到
#define ADD(n1, n2) n1+n2
#define  CHENG(n1, n2) n1*n2 //故意制造的问题

#define LOGIN(V) if(V==1){                      \
cout <<"满足"<<endl;                            \
}else{                                         \
cout <<"不满足"<<endl;                          \
}                          //这个是结尾不需要加上  "\"

void show(){

}
int main() {
    SHOW(8)
    int r = ADD(1, 2);
    cout << r << endl;
    r = ADD(1 + 1, 2 + 2);
    cout << r << endl;
    r = CHENG(1 + 1, 2 + 2); //文本替换 执行的逻辑应该是这样的1+1 * 2+2 先乘除在加减
    cout << r << endl;
    LOGIN(1);\
//    导致代码体积增大
    show();
//    普通函数，每次都会进栈 弹栈 不会导致代码体积增大
    return 0;
}
//宏函数
/**
 * 优点：
 * 1。文本替换，不会造成函数的调用开销（开辟栈空间，形参压栈，函数弹栈释放。。）
 * 缺点：
 * 1.会导致代码体积增大
 */
