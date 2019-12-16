#include<iostream>
#include<string>
using namespace std;

void test()
{
    string str="oooooooooooooooooo";
    str.insert(2,"ttt");
    // str.insert(5,'k');
    // str.insert(7,4,'x');
    str.erase(2,3);
    cout<<str<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}