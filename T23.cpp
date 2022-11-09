//
// Created by 杨敬华 on 2022/11/6.
//
#include "iostream"
#include "pthread.h"
#include "unistd.h"
using namespace std;
void * tunTask(void * pvoid){
    int number = *static_cast<int *>(pvoid);
    cout<<"一部线程"<<endl;
    for (int i = 0; i < 10; ++i) {
        cout<<"run:"+i<<endl;
        sleep(1);
    }
}
int main(){
    int number = 999;
    pthread_t pthreadID;
    pthread_create(&pthreadID,0,tunTask,&number);
    sleep(10);
    return 0;
}