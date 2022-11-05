//
// Created by 杨敬华 on 2022/11/5.
//
#include "iostream"
#include "set"

using namespace std;

class Person {
public:
    string name;
    int id;
public:
    Person(const string &name, int id) : name(name), id(id) {}
};

/**
 *  bool operator()(const _Tp& __x, const _Tp& __y) const
 *  {return __x < __y;}
 *我们要自定义位次
 * @return
 */
bool doCompareAction(const Person &person1, const Person person2) {
    return person1.id < person2.id;
}

// 真正的谓词
struct doCompareAction2 {
public:
    bool is = true;

    doCompareAction2(bool is = true) {
        this->is = is;
    }
    bool operator()(const Person &__x, const Person &__y) {
        if (is) {
            return __x.id < __y.id;
        }
//        else {
//            return __x.id > __y.id;
//        }
    }
};
struct doCompareAction3 {
public:
    bool is = true;

    doCompareAction3(bool is = true) {
        this->is = is;
    }
    bool operator()(const Person &__x, const Person &__y) {
        if (is) {
            return __x.id > __y.id;
        }
//        else {
//            return __x.id > __y.id;
//        }
    }
};

int main() {
    set<Person, doCompareAction3> setper;
    Person person("ay", 0);
    Person person1("clpp", 1);
    Person person2("djkjhj", 3);
    Person  person3 =  Person("yjh",2);
    setper.insert(person);
    setper.insert(person1);
    setper.insert(person2);
    setper.insert(person3);
    for (auto it = setper.begin(); it != setper.end(); it++) {
        cout << "it:name:" << it->name.c_str() << endl;
        cout << "it:age:" << it->id << endl;
    }
    return 0;
}
