#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

void test()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    bool it=binary_search(v.begin(),v.end(),6);
    if(it)
    {
        cout<<"found successfully"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}