#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;
void Pri(int val)
{
    cout<<val<<" ";
}

void test()
{
    vector<int>v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    vector<int>v2;
    for(int i=0;i<10;i++)
    {
        v2.push_back(i+2);
    }
    vector<int>v;
    v.resize(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for_each(v.begin(),v.end(),Pri);
}

int main()
{
    test();
    system("pause");
    return 0;
}