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

    vector<int> v2;
    v2=v1;
    vectorPrint(v2);
    
    vector<int> v3;
    v3.assign(v1.begin(),v1.end());
    vectorPrint(v3);

    vector<int> v4;
    v4.assign(10,9);
    vectorPrint(v4);
}
int main()
{
    test();
    system("pause");
    return 0;
}