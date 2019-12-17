#include<iostream>
#include<vector>
using namespace std;

void test()
{
    vector<int> v;
    v.reserve(100000); //预留空间
    int number=0;
    int *p=NULL;
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);
        if(p!=&v[0])
        {
            p=&v[0];
            number++;
        }
    }
    cout<<number<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}