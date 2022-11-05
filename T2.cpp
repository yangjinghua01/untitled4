//
// Created by 杨敬华 on 2022/11/5.
//优先级队列
#include "iostream"
#include "queue"
using namespace std;
int main2222(){
// 优先级队列 默认排序 默认做了从大到小的封装
// 隐士代码  priority_queue<int,vector<int>,less<int>>
    priority_queue<int> priorityQueue;
    priorityQueue.push(100);
    priorityQueue.push(30);
    priorityQueue.push(40);
    priorityQueue.push(50);
    priorityQueue.push(60);
    priorityQueue.push(70);
    priorityQueue.push(80);
    cout<<"栈顶元素"<<priorityQueue.top()<<endl;
    while (!priorityQueue.empty()){
        cout<<priorityQueue.top()<<endl;
        priorityQueue.pop();
    }
    return 0;
}

