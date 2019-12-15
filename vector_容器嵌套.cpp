#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> V;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    for(int i=0;i<4;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
        v3.push_back(i+10);
        v4.push_back(i+15);
        v5.push_back(i+20);
    }
    V.push_back(v1);
    V.push_back(v2);
    V.push_back(v3);
    V.push_back(v4);
    V.push_back(v5);

    for(vector<vector<int>>::iterator it=V.begin();it!=V.end();it++)
    {
        for(vector<int>::iterator itit=(*it).begin();itit!=(*it).end();itit++)
        {
            cout<<*itit<<" ";
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}