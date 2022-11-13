//
// Created by 杨敬华 on 2022/11/10.
//
//#pragma once
#include "iostream"
#include "safe_queue_too.h"
using namespace std;
SafeQueueClass<int>sq;
void *getMethod(void *){
    while (true){
        printf("getMethod\n");
        int value;
        sq.get(value);
        printf("消费者得到数据%d",value);
        if (-1==value){
            printf("消费者get全部实行完成\n");
            break;
        }
    }
    return 0;
}
void * setMethod(void *){
    while (true){
        printf("setMethod\n");
        int value;
        printf("输入生产信息");
        cin>>value;
        if (-1==value){
            sq.add(value);
            printf("消费者get全部实行完成\n");
            break;
        }
        sq.add(value);
    }
    return 0;
}
int main27(){
    pthread_t pthreadGet;
    pthread_create(&pthreadGet,0,getMethod,0);
    pthread_t pthreadSet;
    pthread_create(&pthreadSet,0,setMethod,0);
    pthread_join(pthreadGet,0);
    pthread_join(pthreadSet,0);
    return 0;
}