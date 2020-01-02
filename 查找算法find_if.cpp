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
        bool operator==(const Person &p)
        {
            if(this->Name==p.Name && this->Age==p.Age)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        string Name;
        int Age;
};
class myCompare
{
    public:
        bool operator()(int val)
        {
            return val>5;
        }
};
class myCompare2
{
    public:
        bool operator()(Person &p)
        {
            return p.Age>70;
        }
};
void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it=find_if(v.begin(),v.end(),myCompare());
    if(it==v.end())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found successfully it="<<*it<<endl;
    }

    vector<Person>p;
    Person p1("sss",78);
    Person p2("iii",85);
    Person p3("hhh",64);
    Person p4("www",35);
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);

    vector<Person>::iterator its=find_if(p.begin(),p.end(),myCompare2());
    if(its==p.end())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"Name: "<<its->Name<<"  Age: "<<its->Age<<endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}