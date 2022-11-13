//
// Created by 杨敬华 on 2022/11/13.
//

#ifndef UNTITLED4_CUSTOMPTR_H
#define UNTITLED4_CUSTOMPTR_H

#endif //UNTITLED4_CUSTOMPTR_H
#pragma once

#include "iostream"

using namespace std;

template<typename T>
class Pet {
    T *obj;
    int * count;
public:
    Pet() {
        count = new int(1);
        obj = 0;
    }

    Pet(T *t) : obj(t) {
        count = new int(1);
    }

    Pet(const Pet<T> &p) {
        cout << "拷贝构造函数" << endl;
        ++(*p.count);
        obj = p.obj;
        count = p.count;
    }

    ~Pet() {
        if (--(*(count)) == 0) {
            if (obj) {
                delete obj;
            }
            delete count;
            obj = 0;
            count = 0;
        }
    }

    Pet<T> &operator=(const Pet<T> &p) {
        cout << "=号运算符重载" << endl;
        ++(*p.count);
        if (--(*count) == 0) {
            if (obj) {
                delete obj;
            }
        }
        obj = 0;
        count = 0;
        return *this;
    }

    int use_count() {
        return *this->count;
    }
};