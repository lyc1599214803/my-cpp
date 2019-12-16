#include<iostream>
#include<string>
using namespace std;

void test()
{
    string str1="tello world";
    string str2="hello world";
    string str3="I love games";

    if(str1.compare(str2)==0)
    {
        cout<<"str1 = str2"<<endl;
    }
    else if(str1.compare(str2)>0)
    {
        cout<<"str1 > str2"<<endl;
    }
    else
    {
        cout<<"str1 < str2"<<endl;
    }
}
int main()
{
    test();
    system("pause");
    return 0;
}