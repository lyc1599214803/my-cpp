#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

class Compare
{
    public:
        bool operator()(int val1,int val2)
        {
            return val1>val2;
        }
};

void vPrint(vector<int>&v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {    
        v.push_back(rand()%10);
    }
    vPrint(v);

    sort(v.begin(),v.end());
    vPrint(v);

    sort(v.begin(),v.end(),Compare());
    vPrint(v);
}

int main()
{
    srand((unsigned int)time(NULL));
    test();
    system("pause");
    return 0;
}