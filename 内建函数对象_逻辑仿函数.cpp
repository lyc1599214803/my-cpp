#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

// logical_and
// logical_or
// logical_not

void test()
{
    vector<bool>v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    for(vector<bool>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<bool>v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    for(vector<bool>::iterator it=v2.begin();it!=v2.end();it++)
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