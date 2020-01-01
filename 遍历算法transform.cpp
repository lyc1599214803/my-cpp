#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Transform
{
    public:
        int operator()(int val)
        {
           return val+10;
        }
};
class Print
{
    public:
        void operator()(int val)
        {
            cout<<val<<" ";
        }
};

void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int>vTarget;
    vTarget.resize(v.size());

    transform(v.begin(),v.end(),vTarget.begin(),Transform());
    for_each(vTarget.begin(),vTarget.end(),Print());

}

int main()
{
    test();
    system("pause");
    return 0;
}