#include<iostream>
#include<set>
using namespace std;

void setPrint(const set<int>&s)
{
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test()
{
    set<int>s1;
    s1.insert(10);
    s1.insert(60);
    s1.insert(30);
    s1.insert(60);
    s1.insert(50);
    set<int>s2;
    s2.insert(100);
    s2.insert(600);
    s2.insert(300);
    s2.insert(600);
    s2.insert(500);
    setPrint(s1);
    setPrint(s2);

    if(s1.empty())
    {
        cout<<"s1 is empty"<<endl;
    }
    else
    {
        cout<<"s1 is not empty"<<endl;
        cout<<"size of s1: "<<s1.size()<<endl;
    }
    if(s2.empty())
    {
        cout<<"s2 is empty"<<endl;
    }
    else
    {
        cout<<"s2 is not empty"<<endl;
        cout<<"size of s2: "<<s2.size()<<endl;
    }
    cout<<"*****************"<<endl;
    s1.swap(s2);
    setPrint(s1);
    setPrint(s2);
}

int main()
{
    test();
    system("pause");
    return 0;
}