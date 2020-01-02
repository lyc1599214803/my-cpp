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
            if(this->Age==p.Age)
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
void test()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    int num=count(v.begin(),v.end(),4);
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
    Person p5("fff",35);
    int numb=count(p.begin(),p.end(),p5);
    cout<<numb<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}