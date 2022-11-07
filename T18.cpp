//
// Created by 杨敬华 on 2022/11/6.
//谓词
#include "iostream"
#include "set"
#include "algorithm"
using namespace std;
class showAction{
public:
    void operator()(int content){
        cout<<"自定义反函数"<<endl;
    }

};
void showAction(int content){
    cout<<"一元谓词"<<endl;
}
int main18(){
    set<int> setVar;
    setVar.insert(10);
    setVar.insert(20);
    setVar.insert(30);
    setVar.insert(40);
    setVar.insert(50);
    setVar.insert(60);
    setVar.insert(70);
    for_each(setVar.begin(), setVar.end(),showAction);
    return 0;
}
