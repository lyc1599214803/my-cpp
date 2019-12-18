#include<iostream>
#include<stack>
using namespace std;

void test()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"size of s: "<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"size of s: "<<s.size()<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}