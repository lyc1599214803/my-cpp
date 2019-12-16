#include<iostream>
#include<string>
using namespace std;

void test()
{
    string str1="sdjfsdjkghbdsjkghbkjdghz";
    int pos1=str1.find("jk");
    cout<<pos1<<endl;
    
    //rfind 从右往左查找
    string str2="sdjfsdjkghbdsjkghbkjdghz";
    int pos2=str2.rfind("jk");
    cout<<pos2<<endl;
    
    //将第4个位置的之后2个替换为"ooooooo"
    str2.replace(4,2,"ooooooo");
    cout<<"str2= "<<str2<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}