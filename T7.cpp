//
// Created by 杨敬华 on 2022/11/3.
//
#include "iostream"

using namespace std;

class SuccessBean {
public:
    string usernam;
    string password;

    SuccessBean(const string &usernam, const string &password) : usernam(usernam), password(password) {}
};

class ILoginResponse {
public:
    virtual void loginSuccess(int code, string msg, SuccessBean successBean)=0;

    virtual void LoginError(int code, string message)=0;
};

void LoginAction(string name, string password, ILoginResponse &loginResponse) {
    if (name.empty() || password.empty()) {
        cout << "用户名或者密码为空" << endl;
        return;
    }
    if ("yjh" == name && "123" == password) {
        loginResponse.loginSuccess(200, "ok", SuccessBean(name, "sdfsad"));
    } else {
        loginResponse.LoginError(400, "no");
    }

};

//接口实现类
class loginImpl : public ILoginResponse {
public:
    void loginSuccess(int code, string msg, SuccessBean successBean) {
        cout << "ok" << code << msg << endl;
        cout << successBean.usernam << successBean.password << endl;
    }

    void LoginError(int code, string message) {
        cout << code << message << endl;
    }
};

int main777() {
    string  username;
    cout<<"input username"<<endl;
    cin>> username;
    string password;
    cin >> password;
    loginImpl login;
    LoginAction(username,password,login);
    return 0;
};
