#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

void test()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    vector<int>::iterator it=adjacent_find(v.begin(),v.end());
    if(it==v.end())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found successfully  it="<<*it<<endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}