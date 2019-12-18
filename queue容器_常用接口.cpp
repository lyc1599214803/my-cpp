#include<iostream>
#include<queue>
using namespace std;

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
void test()
{
    queue<Person>q;
    Person p1("a",100);
    Person p2("b",200);
    Person p3("c",300);
    Person p4("d",400);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    while(!q.empty())
    {
        cout<<q.front().Name<<" "<<q.front().Age<<endl;
        cout<<q.back().Name<<" "<<q.back().Age<<endl;
        cout<<"*******************"<<endl;
        q.pop();
    }
    cout<<q.size()<<endl;

}
int main()
{
    test();
    system("pause");
    return 0;
}