//
// Created by 杨敬华 on 2022/11/26.
//

#include <iostream>
#include "hongdingyi.h"  //使用宏
using namespace std;
int main(){
#ifdef DEBUG
    cout<<"正式环境"<<endl;
#else
    cout<<"在正式环境下，功能上下中"<<endl;
#endif
}