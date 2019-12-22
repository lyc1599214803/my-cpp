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

class myCompare
{
    public:
        bool operator()(int v1,int v2)
        {
            return v1>v2;
        }
};

void test()
{
    set<int>s1;
    s1.insert(10);
    s1.insert(60);
    s1.insert(30);
    s1.insert(70);
    s1.insert(50);
    setPrint(s1);

    set<int,myCompare>s2;
    s2.insert(10);
    s2.insert(60);
    s2.insert(30);
    s2.insert(70);
    s2.insert(50);
    for(set<int,myCompare>::const_iterator it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}