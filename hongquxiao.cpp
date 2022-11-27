//
// Created by 杨敬华 on 2022/11/27.
//宏是可以取消的

#include "iostream"

using namespace std;

int main177777() {
#ifdef YJH
#define YJH
#ifdef YJH
    for(int i =0;i<6;++i){
        cout<<i<<endl;
    }
#undef YJH
#ifdef YJH
cout <<"你定义了宏"<<endl;
#else
    cout<<"你没有定义宏"<<endl;
#endif
#endif
#endif
    return 0;
}