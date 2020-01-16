#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;
void Pri(int val)
{
    cout<<val<<" ";
}

void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),Pri);
    cout<<endl;

    reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),Pri);
    cout<<endl;

}

int main()
{
    srand((unsigned int)time(NULL));
    test();
    system("pause");
    return 0;
}