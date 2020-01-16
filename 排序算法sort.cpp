#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Pri(int val)
{
    cout<<val<<" ";
}
class MyCompare
{
    public:
        bool operator()(int val1,int val2)
        {
            return val1>val2;
        }
};
void test()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),Pri);
    cout<<endl;

    sort(v.begin(),v.end(),MyCompare());
    for_each(v.begin(),v.end(),Pri);
}

int main()
{
    test();
    system("pause");
    return 0;
}