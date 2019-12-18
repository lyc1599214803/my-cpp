#include<iostream>
#include<deque>
using namespace std;

void dequePrint(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test()
{
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);

    d1.push_front(3);
    d1.push_front(2);
    d1.push_front(1);
    dequePrint(d1);

    d1.pop_back();
    d1.pop_front();
    dequePrint(d1);

    deque<int>d2;
    d2.push_back(10);
    d2.push_back(20);
    d2.push_front(200);
    d2.push_front(100);
    d2.insert(d2.begin(),2,777);
    dequePrint(d2);
    d2.insert(d2.begin()+2,d1.begin(),d1.end());
    dequePrint(d2);

    deque<int>::iterator it=d2.begin();
    it+=3;
    d2.erase(it);
    dequePrint(d2);

    d2.erase(d2.begin(),d2.end());
    dequePrint(d2);

    d1.clear();
    dequePrint(d1);
}
int main()
{
    test();
    system("pause");
    return 0;
}