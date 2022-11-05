// list 学习
// Created by 杨敬华 on 2022/11/5.
//
#include "iostream"
#include "list"
using namespace std;
int main4444(){
    list<int> list;
    list.insert(list.begin(),0);
    list.insert(list.begin(),10);
    list.insert(list.begin(),20);
    list.insert(list.begin(),30);
    list.insert(list.end(),70);
    cout<<list.front()<<endl;
    cout<<list.back()<<endl;
    list.erase(list.begin());
    list.erase(list.end());
    /**
     * 不能通过索引访问
     * 可以通过迭代器遍历
     */
     for(auto item = list.begin();item!=list.end();item++){
         cout<<"item"<<*item<<endl;
     }
    return 0;
}

