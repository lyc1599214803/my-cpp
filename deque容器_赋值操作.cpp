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
}
void test()
{
    deque<int>d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    dequePrint(d1);

    deque<int>d2;
    d2=d1;
    dequePrint(d2);

    deque<int>d3;
    d3.assign(d1.begin(),d1.end());
    dequePrint(d3);

    deque<int>d4;
    d4.assign(10,9);
    dequePrint(d4);
}
int main()
{
    test();
    system("pause");
    return 0;
}