#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
class Person
{
    public:
        Person(string name,int age)
        {
            this->Age=age;
            this->Name=name;
        }
        string Name;
        int Age;
};
class myCount1
{
    public:
        bool operator()(int val)
        {
            return val>4;
        }
};
class myCount2
{
    public:
        bool operator()(const Person &p)
        {
            return p.Age>30;
        }
};
void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    int num=count_if(v.begin(),v.end(),myCount1());
    cout<<num<<endl;

    vector<Person>p;
    Person p1("sss",78);
    Person p2("iii",35);
    Person p3("hhh",64);
    Person p4("www",35);
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);

    int numb=count_if(p.begin(),p.end(),myCount2());
    cout<<numb<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}