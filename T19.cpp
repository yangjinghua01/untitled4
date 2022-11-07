//
// Created by 杨敬华 on 2022/11/6.
//函数适配器
#include "iostream"
#include "set"
using namespace std;
int main(){
    set<string,less<string>>setvar;
    setvar.insert("AAAA");
    setvar.insert("BBBB");
    setvar.insert("CCCC");
    for(auto it = setvar.begin();it!=setvar.end();it++){
        cout<<*it<<endl;
    }
    set<string,less<string>>::iterator itetrtorRes = find_if(setvar.begin(),setvar.end(), bind2nd(equal_to<string>(),"CCCC"));
    if (itetrtorRes!=setvar.end()){
        cout<<"ok"<<endl;
    } else{
        cout<<"no"<<endl;
    }
    return 0;
}