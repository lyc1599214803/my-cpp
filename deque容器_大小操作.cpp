#include<iostream>
#include<deque>
using namespace std;

void dequePrint(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    if(d.empty())
    {
        cout<<"this deque is empty"<<endl;
    }
    else
    {
        cout<<"this deque isn't empty"<<endl;
        cout<<"the size of this deque: "<<d.size()<<endl;
    }
}
void test()
{
    deque<int>d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    dequePrint(d1);

    d1.resize(20);
    dequePrint(d1);

    d1.resize(30,7);
    dequePrint(d1);

    d1.resize(5);
    dequePrint(d1);
}
int main()
{
    test();
    system("pause");
    return 0;
}