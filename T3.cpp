//
// Created by 杨敬华 on 2022/11/3.
// 多态(动态多态) （程序运行期间才能决定到底调用那个类的函数 == 动态多态）
#include "iostream"

using namespace std;

class BaseActivity {
public:
   virtual void onStart() {
        cout << "BaseActivity onStart" << endl;
    }
};

class HomeActivity : public BaseActivity {
public:
    void onStart() {
        cout << "HomeActivity onStart" << endl;
    }
};

class LoginActivity : public BaseActivity {
public:
    void onStart() {
        cout << "LoginActivity onStart" << endl;
    }
};

//在此函数 体现多态，你传入HomeActivity就运行HomeActivity；
void starActivity(BaseActivity & baseActivity) {
    baseActivity.onStart();
}

int main3() {
    HomeActivity *homeActivity = new HomeActivity();
    LoginActivity *loginActivity = new LoginActivity();
    starActivity(*homeActivity);
    starActivity(*loginActivity);
    HomeActivity homeActivity1 = HomeActivity();
    starActivity(*homeActivity);
    if (homeActivity) {
        delete homeActivity;
        homeActivity = NULL;
    }
    if (loginActivity) {
        delete loginActivity;
        loginActivity = NULL;
    }
    /*
     * 什么是多态
     * 1 父类的引用指向子类对象
     * 2 同一个方法有不同的实现
     * 3 重载（静态多态）和重写(动态多态)
     */
    return 0;
};

