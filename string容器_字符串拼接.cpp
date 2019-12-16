#include<iostream>
#include<string>
using namespace std;

void test()
{
    string str1="I love ";
    str1+="playing games";
    cout<<"str1= "<<str1<<endl;

    string str2=", such as LOL and DNF.";
    str1+=str2;
    cout<<"str1= "<<str1<<endl;

    string str3="I";
    str3.append(" love");
    str3.append(" game abcdefg",5);
    cout<<"str3= "<<str3<<endl;

    string str4="I";
    str4.append(" love");
    str4.append(" game abcdefg",5);
    str4.append(str2,0,14);
    cout<<"str4= "<<str4<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}