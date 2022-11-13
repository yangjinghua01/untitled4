//
// Created by 杨敬华 on 2022/11/13.
//unique 智能指针 设计的够简单
#include "iostream"
#include "memory"
using namespace std;
class Person{

};
int main29(){
    Person * person = new Person();
    Person * person1 = new Person();
    unique_ptr<Person>uniquePtr1(person1);
    //禁止 unique_ptr<Person>uniquePtr2=uniquePtr1;

    return 0;
}

