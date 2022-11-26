#include "iostream"
using namespace std;
class human {
public:
    string name = "小明";
};
class student:public human {
public:
    string name = "小红";
    void print()
    {
        cout << human::name << endl;
    }
};
int main000000000()
{
    student st;
    st.print();
    return 0;
}