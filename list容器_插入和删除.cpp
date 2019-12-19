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
void test()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    listPrint(l1);

    //push_back(elem);
    //pop_back(elem);
    //push_front(elem);
    //pop_front(elem);

    //insert(pos,elem);
    //insert(pose,n,elem);
    //insert(pos,beg,end);
    
    //clear();
    //erase(beg,end);
    //erase(pose);
    //remove(elem);
}

int main()
{
    test();
    system("pause");
    return 0;
}