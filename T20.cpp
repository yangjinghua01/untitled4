//
// Created by 杨敬华 on 2022/11/6.
//
#include "iostream"
using namespace std;
class Student{
private:
    string info = "AAA";
public:
//    第一种情况是属于值传递 修改值的时候不会影响就变量
    string getInfo(){
        return this->info;
    }

public:
//    地址传递一块内存地址有多个别名而已赋值会影响旧变量
    string & getinfo_front(){
        return this->info;
    }
};
int main20(){
    Student student;
    student.getInfo() = "BBB";
    cout<<student.getInfo()<<endl;
    student.getinfo_front() = "CCC";
    cout<<student.getInfo()<<endl;
    return 0;
}