//
// Created by 杨敬华 on 2022/11/6.
//
#include "iostream"
#include "pthread.h"
using namespace std;
void * customPthreadTask(void * pVoid){
    int num = *static_cast<int *>(pVoid);
    cout<<"一部线程"<<num<<endl;
    return 0;
}
int main22(){
    int num = 9527;
    pthread_t pthreadID;
    /**
     * int pthread_create(pthread_t _Nullable * _Nonnull __restrict,
		const pthread_attr_t * _Nullable __restrict,
		void * _Nullable (* _Nonnull)(void * _Nullable),
		void * _Nullable __restrict);

     */
    pthread_create(&pthreadID,0,customPthreadTask,&num);
    return 0;
}