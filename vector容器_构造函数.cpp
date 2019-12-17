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

    vector<int> v2(v1.begin(),v1.end());
    vectorPrint(v2);
    
    vector<int> v3(10,5);
    vectorPrint(v3);

    vector<int> v4(v3);
    vectorPrint(v4);
}
int main()
{
    test();
    system("pause");
    return 0;
}