//
// Created by 杨敬华 on 2022/11/3.
//全纯虚函数
#include "iostream"

using namespace std;

class Student {
    int _id;
    string name;
    int age;
};

//此类所有的函数都是纯虚函数就相当于java的接口类；
class IStudent_DB {
    virtual void insertStudent(Student student) = 0;

    virtual void deleteStudent(int _id) = 0;

    virtual void upDateStudent(int _id) = 0;

    virtual Student queryStudent(Student student) = 0;
};

class IStudent_DBImpl1 : public IStudent_DB {
public:
    void insertStudent(Student student) {

    }

    void deleteStudent(int _id) {

    }

    void upDateStudent(int _id) {

    }

    Student queryStudent(Student student) {

    }
};
class IStudent_DBImpl2 : public IStudent_DB {
public:
    void insertStudent(Student student) {

    }

    void deleteStudent(int _id) {

    }

    void upDateStudent(int _id) {

    }

    Student queryStudent(Student student) {

    }
};
class IStudent_DBImpl3 : public IStudent_DB {
public:
    void insertStudent(Student student) {

    }

    void deleteStudent(int _id) {

    }

    void upDateStudent(int _id) {

    }

    Student queryStudent(Student student) {

    }
};

int main122() {
    IStudent_DBImpl1 studentDbImpl1;
    IStudent_DBImpl2 studentDbImpl2;
    IStudent_DBImpl3 studentDbImpl3;
    return 0;
}

