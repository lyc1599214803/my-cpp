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

    s1.erase(s1.begin());
    setPrint(s1);

    s1.erase(30);
    setPrint(s1);

    s1.erase(s1.begin(),s1.end());
    setPrint(s1);

    s1.clear();
    setPrint(s1);
}

int main()
{
    test();
    system("pause");
    return 0;
}