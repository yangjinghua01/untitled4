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
//    如果定义了对象成员，必须这样初始化（构造函数的后面： 对象成员（内容））
    Cource cource;
public:
    Student(const string &name, int age, const Cource &cource)
    : Persion(name, age), //既然继承了父类的就必须给父类的构造函数
    cource(cource)
    {

    }
};

int main122333() {
    Cource cource = Cource("dfsad");
    Student student = Student("yjh",20,cource);
    return 0;
}
