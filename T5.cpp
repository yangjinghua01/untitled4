//
// Created by 杨敬华 on 2022/11/3.
// 纯虚函数（java版的抽象类）c++纯虚函数
#include "iostream"

using namespace std;

// 抽像类/纯虚函数 分为普通函数 抽象函数 纯虚函数
class BaseActivity {
private:
    void setContentView(string layoutID) {
        cout << "xml解析布局文件信息---反射" << endl;
    }

public:
//    普通函数
    void onCreat() {
        setContentView(getLayout());
        initView();
        initData();
        initListener();
    }

//    抽象函数 纯虚函数
//    virtual string getLayout();//虚函数
    virtual string getLayout() = 0;//纯虚函数

    virtual void initView() = 0;

    virtual void initData() = 0;

    virtual void initListener() = 0;

};

class MainActivity : public BaseActivity {//MainActivity 没有重写父类的纯虚函数自己就相当于抽象类类。（如果子类没有重写纯虚函数，子类就是抽象函数）
     string getLayout() {

    }

    virtual void initView() {

    }

    virtual void initData() {

    }

    virtual void initListener() {

    }
};

int main324344() {
//    抽象类绝对不能实例化；
    MainActivity mainActivity;
}