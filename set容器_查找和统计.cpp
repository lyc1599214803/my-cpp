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
    setPrint(s1);

    set<int>::iterator pos=s1.find(70);
    if(pos!=s1.end())
    {
        cout<<*pos<<endl;
    }
    else
    {
        cout<<"don't find"<<endl;
    }

    int num=s1.count(30);
    cout<<"num= "<<num<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}