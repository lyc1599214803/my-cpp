#include<iostream>
#include<vector>
using namespace std;
void vectorPrint(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test()
{
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    vectorPrint(v1);
    
    if(v1.empty())
    {
        cout<<"v1 is empty"<<endl;
    }
    else
    {
        cout<<"v1 is not empty"<<endl;
        cout<<"size of v1: "<<v1.size()<<endl;
        cout<<"capacity of v1: "<<v1.capacity()<<endl;
    }
    v1.resize(15,7);
    vectorPrint(v1);
    v1.resize(5);
    vectorPrint(v1);
}
int main()
{
    test();
    system("pause");
    return 0;
}