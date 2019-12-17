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
    
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    cout<<"the first element: "<<v1.front()<<endl;
    cout<<"the last  element: "<<v1.back()<<endl;

}
int main()
{
    test();
    system("pause");
    return 0;
}