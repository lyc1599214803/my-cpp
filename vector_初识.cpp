#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void myprint(int val)
{
    cout<<val<<endl;
}
void test1()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // vector<int>::iterator itBegin=v.begin();
    // vector<int>::iterator itEnd=v.end();

    // while(itBegin!=itEnd)
    // {
    //     cout<<*itBegin<<endl;
    //     itBegin++;
    // }

    // for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    for_each(v.begin(),v.end(),myprint);
}
class Person
{
    public:
        Person(string name, int age)
        {
            this->Name=name;
            this->Age=age;
        }

        string Name;
        int Age;
};
void test2()
{
    Person p1("aaa", 17);
    Person p2("bbb", 18);
    Person p3("ccc", 19);
    Person p4("ddd", 90);
    Person p5("uuu", 890);

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<"name: "<<it->Name<<"  Age: "<<it->Age<<endl;
    }
}

void test3()
{
    Person p1("aaa", 17);
    Person p2("bbb", 18);
    Person p3("ccc", 19);
    Person p4("ddd", 90);
    Person p5("uuu", 890);

    vector<Person*> v;
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    for(vector<Person*>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<"name: "<<(*it)->Name<<"  Age: "<<(*it)->Age<<endl;
    }
}
int main()
{
    test1();
    test2();
    test3();
    system("pause");
    return 0;
}