// jdk 线程用的是pthreads  Linux开发用pthreads
// Created by 杨敬华 on 2022/11/6.
//c++多线程
#include "iostream"
#include "thread"
#include "unistd.h"

using namespace std;

void runAction() {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
        sleep(1);
    }
}

int main21() {
//    方式1
//    thread thread1(runAction(), 100);
//    sleep(3);
//    方式2
//    thread thread2(runAction(), 100);
//    thread2.join()
    return 0;
}