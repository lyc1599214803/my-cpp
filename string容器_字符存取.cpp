#include<iostream>
#include<string>
using namespace std;

void test()
{
    string str="jdfgghhlgl";
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<str.size();i++)
    {
        cout<<str.at(i)<<" ";
    }
    cout<<"\n";

    str[1]='x';
    cout<<str<<endl;
    
    str.at(2)='y';
    cout<<str<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}