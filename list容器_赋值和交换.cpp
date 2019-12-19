#include<iostream>
#include<list>
using namespace std;
void listPrint(const list<int>&l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    listPrint(l1);

    list<int>l2=l1;
    listPrint(l2);

    list<int>l3;
    l3.assign(l2.begin(),l2.end());
    listPrint(l3);

    list<int>l4;
    l4.assign(5,9);
    listPrint(l4);

    cout<<"*******************"<<endl;
    listPrint(l2);
    listPrint(l4);
    l2.swap(l4);
    listPrint(l2);
    listPrint(l4);
}

int main()
{
    test();
    system("pause");
    return 0;
}