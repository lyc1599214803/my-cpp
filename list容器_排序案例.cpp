#include<iostream>
#include<list>
#include<string>
using namespace std;

class Person
{
    public:
        Person(string name,int age,float height)
        {
            this->Name=name;
            this->Age=age;
            this->Height=height;
        }

        string Name;
        int Age;
        float Height;
};
bool compare(Person &p1,Person &p2)
{
    if(p1.Age==p2.Age)
    {
        return p1.Height>p2.Height;
    }
    return p1.Age>p2.Age;;
}
void test()
{
    Person p1("liubei",50,172.3);
    Person p2("guanyu",43,189.9);
    Person p3("zhangfei",43,192.0);
    Person p4("xiaoqiao",22,168.4);
    Person p5("caocao",43,172.5);
    Person p6("sunshangxiang",23,165.5);
    list<Person>p;
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);
    p.push_back(p6);

    for(list<Person>::const_iterator it=p.begin();it!=p.end();it++)
    {
        cout<<(*it).Name<<" "<<(*it).Age<<" "<<(*it).Height<<endl;
    }
    cout<<"*******************************"<<endl;

    p.sort(compare);
    for(list<Person>::const_iterator it=p.begin();it!=p.end();it++)
    {
        cout<<(*it).Name<<" "<<(*it).Age<<" "<<(*it).Height<<endl;
    }
    cout<<"*******************************"<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}