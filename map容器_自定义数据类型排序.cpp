#include<iostream>
#include<map>
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

// class myCompare
// {
//     public:
//         bool operator()(const Person &p1,const Person &p2)
//         {
//             return p1.Age>p2.Age;
//         }
// };
class myCompare
{
    public:
        bool operator()(int v1,int v2)
        {
            return v1>v2; 
        }
};
void mapPrint(const map<int,Person,myCompare>&mp)
{
    for(map<int,Person,myCompare>::const_iterator it=mp.begin();it!=mp.end();it++)
    {
        cout<<"Key:"<<(*it).first<<"  Name:"<<it->second.Name<<" Age:"<<it->second.Age<<" Height:"<<it->second.Height<<endl;
    }
    cout<<endl;
}

void test()
{
    Person p1("A",23,178.4);
    Person p2("V",15,189.9);
    Person p3("G",35,154.9);
    Person p4("S",32,197.3);
    Person p5("L",15,167.2);
    map<int,Person,myCompare>m;
    m.insert(pair<int,Person>(1,p1));
    m.insert(pair<int,Person>(2,p2));
    m.insert(pair<int,Person>(3,p3));
    m.insert(pair<int,Person>(4,p4));
    m.insert(pair<int,Person>(5,p5));
    mapPrint(m);
}

int main()
{
    test();
    system("pause");
    return 0;
}