#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

// equal_to
// not_equal
// greater
// greater_equal
// less
// less_equal

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
    vector<int>v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);

    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // sort(v.begin(),v.end(),myCompare());
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    sort(v.begin(),v.end(),greater<int>());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
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