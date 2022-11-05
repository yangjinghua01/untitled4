// set 容器  红黑树结构 会对你传入的数据排序不允许元素相同
// Created by 杨敬华 on 2022/11/5.
//
#include "iostream"
#include "set"

using namespace std;

int main13() {
    set<int> setvar;
    setvar.insert(0);
    setvar.insert(3);
    setvar.insert(2);
    setvar.insert(4);
    setvar.insert(1);
//    重复插入并不会发生报错
    pair<set<int>::iterator, bool> res = setvar.insert(9);
    bool success = res.second;
    if (success) {
        cout << "插入成功" << endl;
        for (; res.first != setvar.end(); res.first++) {
            cout << "值" << *res.first << endl;
        }
    } else {
        cout << "插入失败" << endl;
    }
//    全部遍历
    for (auto it = setvar.begin(); it != setvar.end(); it++) {
        cout << "set值" << *it << endl;
    }
    return 0;
}
