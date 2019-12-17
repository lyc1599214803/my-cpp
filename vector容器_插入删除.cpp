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

    v1.pop_back();
    vectorPrint(v1);

    v1.insert(v1.begin(),7);
    vectorPrint(v1);

    v1.insert(v1.begin(),3,9);
    vectorPrint(v1);

    v1.erase(v1.begin());
    vectorPrint(v1);

    v1.erase(v1.begin(),v1.end());
    vectorPrint(v1);

    v1.clear();
    vectorPrint(v1);
}
int main()
{
    test();
    system("pause");
    return 0;
}