#include<iostream>
#include<deque>
using namespace std;

void test()
{
    deque<int>d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    for(int i=0;i<d1.size();i++)
    {
        cout<<d1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<d1.size();i++)
    {
        cout<<d1.at(i)<<" ";
    }
    cout<<endl;

    cout<<d1.front()<<endl;
    cout<<d1.back()<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}