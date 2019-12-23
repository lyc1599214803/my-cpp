#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class BiggerFive
{
    public:
        bool operator()(int val)
        {
            return val>5;
        }
};

void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    //匿名函数对象
    vector<int>::iterator it=find_if(v.begin(),v.end(),BiggerFive());
    if(it!=v.end())
    {
        cout<<"find successfully :"<<*it<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}