#include<iostream>
#include<string>
using namespace std;

void test()
{
    string s1;

    const char* str="hello-world";
    string s2(str);
    cout<<"s2="<<s2<<endl;

    string s3(s2);
    cout<<"s3="<<s3<<endl;

    string s4(5,'s');
    cout<<"s4="<<s4<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}