//
// Created by 杨敬华 on 2022/11/6.
//map 容器学习
#include "iostream"

using namespace std;

#include "map"

int main15() {
    cout << "Map容器学习" << endl;
    map<int, string> mapvar;
//1.第一种方式
    mapvar.insert(pair<int, string>(1, ""));
//2.第二种方式
    mapvar.insert(make_pair(2, ""));
//3.第三种方式
    mapvar.insert(map<int, string>::value_type(3, ""));
//    上面三种方式key不能重复
//判断是否插入成功
    pair<map<int,string>::iterator,bool>res = mapvar.insert(make_pair(21, "55555"));
    if (res.second){
        cout<<"scuess"<<endl;
    } else{
        cout<<"error"<<endl;
    }
    for(res.first==mapvar.begin();res.first!=mapvar.end();res.first++){
        cout<<res.first->first<<endl;
        cout<<res.first->second<<endl;
    }

//4.第四种方式
    mapvar[4] = "4";
    //循环打印 迭代器
    for(auto item = mapvar.begin();item!=mapvar.end();item++){
        cout << "key:"<<item->first <<endl;
        cout << "value:"<<item->second.c_str() <<endl;
    }
//    查找，删除，操作
    map<int,string>::iterator  findres = mapvar.find(21);
    if (findres!=mapvar.end()){
        cout<<"ok"<<findres->first<<findres->second.c_str()<<endl;
    }else{
        cout<<"no"<<endl;
    };
    return 0;
}
