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
void test1()
{
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    vectorPrint(v1);

    vector<int> v2;
    for(int i=9;i>=0;i--)
    {
        v2.push_back(i);
    }
    vectorPrint(v2);

    cout<<"after swap: "<<endl;
    v1.swap(v2);
    vectorPrint(v1);
    vectorPrint(v2);
}

void test2()
{
    vector<int>v2;
    for(int i=0;i<100000;i++)
    {
        v2.push_back(i);
    }
    cout<<"the capacity of v2: "<<v2.capacity()<<endl;
    cout<<"the size of v2: "<<v2.size()<<endl;

    v2.resize(3);
    cout<<"the capacity of v2: "<<v2.capacity()<<endl;
    cout<<"the size of v2: "<<v2.size()<<endl;

    vector<int>(v2).swap(v2); //收缩内存
    cout<<"the capacity of v2: "<<v2.capacity()<<endl;
    cout<<"the size of v2: "<<v2.size()<<endl;
}
int main()
{
    // test1();
    test2();
    system("pause");
    return 0;
}