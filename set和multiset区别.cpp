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

void setPrint(const multiset<int>&ms)
{
    for(multiset<int>::const_iterator it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test()
{
    set<int>s1;
    s1.insert(10);
    pair<set<int>::iterator,bool> ret=s1.insert(10);

    if(ret.second)
    {
        cout<<"insert successfully"<<endl;
    }
    else
    {
        cout<<"insert faliure"<<endl;
    }

    multiset<int>ms;
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    setPrint(ms);
}

int main()
{
    test();
    system("pause");
    return 0;
}