//
// Created by 杨敬华 on 2022/11/3.
//模版函数 类似java 的范型
#include "iostream"

using namespace std;

void addAction(int n1, int n2) {
    cout << n2 + n1 << endl;
}

void addAction(float n1, float n2) {
    cout << n2 + n1 << endl;
}

//模版函数
template<typename TT>
void addAction(TT n1, TT n2) {
    cout << "模版函数" << endl;
}

int main8() {

}
