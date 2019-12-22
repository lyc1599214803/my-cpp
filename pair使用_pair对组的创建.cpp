#include<iostream>
#include<set>
using namespace std;


void test()
{
    pair<string,int>p("Tom",20);
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<string,int>q=make_pair("Jery",30);
    cout<<q.first<<endl;
    cout<<q.second<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}