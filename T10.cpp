//
// Created by 杨敬华 on 2022/11/5.
//栈 先进后出 后进先出
#include "iostream"
#include "stack"
using namespace std;
int main10(){
// 先压栈
    stack<int> stackVar;
    stackVar.push(3);
    stackVar.push(6);
    stackVar.push(9);
    while (!stackVar.empty()){
        int top = stackVar.top();
        cout<<top<<endl;//死循环一直取栈顶的元素
        stackVar.pop();//元素弹出去了
    }
    return 0;
}

