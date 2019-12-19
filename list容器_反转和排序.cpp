#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void listPrint(const list<int>&l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    if(l.empty())
    {
        cout<<"l is empty"<<endl;
    }
    else
    {
        cout<<"l is not empty"<<endl;
        cout<<"size of l: "<<l.size()<<endl;
    }
}

bool mycompare(int x, int y)
{
    return x>y;
}
void test()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(34);
    l1.push_back(21);
    l1.push_back(14);
    l1.push_back(50);
    listPrint(l1);

    l1.reverse();
    listPrint(l1);

    //sort(l1); 不支持随机访问，不可以用sort()
    l1.sort();
    listPrint(l1);

    l1.sort(mycompare);
    listPrint(l1);
}

int main()
{
    test();
    system("pause");
    return 0;
}