#include<iostream>
#include<set>
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

class myCompare
{
    public: 
        bool operator()(const Person &p1,const Person &p2)
        {
            return p1.Height>p2.Height;
        }
};

void test()
{
    Person p1("A",23,178.4);
    Person p2("V",15,189.9);
    Person p3("G",35,154.9);
    Person p4("S",32,197.3);
    Person p5("L",15,167.2);

    set<Person,myCompare>s;
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    s.insert(p5);

    for(set<Person,myCompare>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<it->Name<<" "<<it->Age<<" "<<it->Height<<endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}