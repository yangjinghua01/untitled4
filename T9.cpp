//java 的集合框架 非常强大 相当于
// Created by 杨敬华 on 2022/11/5.
// c++  vector  向量 容器（内部：封装动态大小数组作为容器，能够存放任意的动态数组【数据结构】

#include "iostream"
#include "vector"
using namespace std;

int main89() {
    cout << "标准函数库" << endl;
    vector<int> vector1;
    vector<int> vector2(10);
    vector<int> vector3(10,0);
    vector<int> vector4;
//    vector4.begin() 迭代器 插入到前面
//    vector4.end()   迭代器 插入到后面
    vector4.insert(vector4.begin(),1);
    vector4.insert(vector4.begin(),2);
    vector4.insert(vector4.begin(),3);
    vector4.insert(vector4.begin(),4);
    vector4.insert(vector4.begin(),4);
    vector4.insert(vector4.begin(),4);
    vector4.insert(vector4.begin(),4);
    vector4.front();//获取第一个
    cout<<vector4.front()<<endl;
    vector4.back();//获取最后有一个
    cout<<vector4.back()<<endl;
    vector4.erase(vector4.begin());
//    纯for遍历
    for (int i = 0; i < vector4.size(); ++i) {
        cout<<"值"<<vector4[i]<<endl;
    }
//    迭代器 循环遍历
//使用verctor 引出他自身的迭代器 ， iteratorVar迭代器的别名，让迭代器等于集合的开始 判读条件是不等于集合的最后一个 迭代器的下标不断移动类似java中的强遍历 直接
//for 对象
// 还可以使用类型推导
for(vector<int> ::iterator iteratorVar = vector4.begin();iteratorVar!=vector4.end();iteratorVar++){
    cout<<"迭代器"<<*iteratorVar<<endl;
}
//auto 类型推导
for(auto item = vector4.begin();item!=vector4.end();item++){
    cout<<"类型推导迭代器"<<*item<<endl;
}
    return 0;
}

