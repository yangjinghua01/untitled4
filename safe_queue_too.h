//
// Created by 杨敬华 on 2022/11/10.
//

#ifndef UNTITLED4_SAFE_QUEUE_TOO_H
#define UNTITLED4_SAFE_QUEUE_TOO_H

#endif //UNTITLED4_SAFE_QUEUE_TOO_H

#include "iostream"
#include "string"
#include "pthread.h"
#include "queue"

using namespace std;

//定义模版函数 int double float
template<typename T>
class SafeQueueClass {
private:
    queue<T> queue; //定义队列
    pthread_mutex_t mutex;//定义互斥锁
    pthread_cond_t cond;//条件变量，为了实现等待唤醒
public:
    SafeQueueClass() {
//初始化互斥锁
        pthread_mutex_init(&mutex, 0);
//初始化条件变量
        pthread_cond_init(&cond, 0);
    }

    ~SafeQueueClass() {
        pthread_mutex_destroy(&mutex);
        pthread_cond_destroy(&cond);
    }

//    TODO 加入队列进行生产
    void add(T t) {
        pthread_mutex_lock(&mutex);
        queue.push(t);
//        pthread_cond_signal(&cond);
        pthread_cond_broadcast(&cond);
        cout<<"add queue.push我已经刷新等待线程了"<<endl;
        pthread_mutex_unlock(&mutex);
    }
    void  get(T & t){
        pthread_mutex_lock(&mutex);
        while (queue.empty()){
            pthread_cond_wait(&cond,&mutex);
        }
        t = queue.front();
        queue.pop();
        pthread_mutex_unlock(&mutex);
    }
};