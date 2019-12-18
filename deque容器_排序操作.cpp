#include<iostream>
#include<deque>
#include<algorithm>
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
    deque<int>d;
    d.push_back(32);
    d.push_back(54);
    d.push_back(23);
    d.push_back(65);
    d.push_back(34);
    d.push_back(90);
    d.push_back(16);
    dequePrint(d);

    sort(d.begin(),d.end());
    dequePrint(d);
}
int main()
{
    test();
    system("pause");
    return 0;
}