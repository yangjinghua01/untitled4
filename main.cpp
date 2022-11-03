#include <iostream>

using namespace std;

class Persion {
protected:
//    注意：string 是std 命名空间里面的成员变量。C++源码是这种写法Std::string
//    string 内部其实就是对char * 的封装。
    string name;
    int age;
public:
    Persion(const string &name) : name(name) {}

    Persion(const string &name, int age) : name(name), age(age) {

    }
};
class Cource{
private:
    string name;
public:
    Cource(const string &name) : name(name) {}
};
class Student :public Persion{
private:
    Cource cource;
public:
    Student(const string &name, int age, const Cource &cource) : Persion(name, age), cource(cource) {}
};

int main() {

    return 0;
}
