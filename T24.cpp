////
//// Created by 杨敬华 on 2022/11/6.
////
//#include "iostream"
//#include "pthread.h"
//#include "queue"
//#include "unistd.h"
//using namespace std;
//queue<int>queueData;
//pthread_mutex_t  mutextest;
//void * task (void * pvoid){
//    pthread_mutex_lock(&mutextest);
//    cout<<"线程标记"<<*static_cast<int *>(pvoid)<<endl;
//    if (!queueData.empty()){
//        cout<<"获取队列数据"<<queueData.front()<<endl;
//        queueData.pop();
//    } else{
//       cout<<"异步获取队列数据没有了"<<endl;
//    }
//    pthread_mutex_unlock(&mutextest);
//    sleep(1);
//    return 0;
//}
//int main(){
////    互斥锁
//    pthread_mutex_init(&mutextest,NULL);
//    for (int i = 10001; i < 10006; ++i) {
//        queueData.push(i);
//    }
//    pthread_t pthreadIDArray[10];
//    for (int i = 0; i < 10; ++i) {
//        pthread_create(&pthreadIDArray[i],0,task,&i);
////        不能使用join如果使用就变成顺序了失去了多线程的意义了
////        pthread_join(pthreadIDArray[i],0);
//    }
//    pthread_mutex_destroy(&mutextest);
//    return 0;
//}