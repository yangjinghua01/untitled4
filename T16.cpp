//
// Created by 杨敬华 on 2022/11/6.
//
#include "iostream"
#include "map"
using namespace std;
int main16(){
//    key可以重复 key重复的数据可以分组
    multimap<int,string> multimapvar;
    multimapvar.insert(make_pair(10,"A1"));
    multimapvar.insert(make_pair(10,"A2"));
    multimapvar.insert(make_pair(40,"A3"));

    multimapvar.insert(make_pair(20,"B1"));
    multimapvar.insert(make_pair(50,"B2"));
    multimapvar.insert(make_pair(40,"B3"));

    multimapvar.insert(make_pair(30,"C1"));
    multimapvar.insert(make_pair(30,"C2"));
    multimapvar.insert(make_pair(30,"C3"));
    for(auto item=multimapvar.begin();item!=multimapvar.end();item++){
        cout<<item->first<<endl;
        cout<<item->second<<endl;
    }
    int res;
    cin>>res;
    multimap<int,string>::iterator  it = multimapvar.find(res);
    while (it != multimapvar.end()) {
        if (it != multimapvar.end()) {
            cout << "ok" << it->first << endl;
            cout << "ok" << it->second << endl;
            it++;
            if (it->first != res) {
                break;
            }
            if (it == multimapvar.end()){
                break;
            }
        }
    }
    return 0;
}
