//
// Created by 杨敬华 on 2022/11/5.
//queue 队列
#include "iostream"
#include "queue" //队列内部可能是使用链表或数组实现

using namespace std;

int main11() {
    queue<int> queue;
    queue.push(20);
    queue.push(10);
    queue.push(30);
//    第一个元素是20
    cout << queue.front() << endl;
    cout<<queue.back()<<endl;
    while (!queue.empty()){
        cout<<"队列数据"<<queue.front()<<endl;
        queue.pop();
    }
    return 0;
}

