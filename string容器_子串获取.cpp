#include<iostream>
#include<string>
using namespace std;

void test()
{
    string str="hjsdfgdhgfd";
    string s;
    s=str.substr(2,4);
    cout<<str<<endl;
    cout<<s<<endl;

    string email="lycfight@stu.xjtu.edu.cn";
    int pos=email.find("@");
    string name=email.substr(0,pos);
    cout<<name<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}