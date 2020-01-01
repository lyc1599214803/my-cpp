#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(int val)
{
    cout<<val<<" ";
}
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
    for_each(v.begin(),v.end(),print);
    cout<<endl;

    for_each(v.begin(),v.end(),Print());
    cout<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}