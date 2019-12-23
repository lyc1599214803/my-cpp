#include<iostream>
using namespace std;

class myAdd
{
    public:
        int operator()(int a,int b)
        {
            return a+b;
        }
};
class myPrint
{
    public:
        myPrint()
        {
            count=0;
        }
        //函数对象可以有自己状态
        void operator()(string text)
        {
            cout<<text<<endl;
            this->count++;
            cout<<"count="<<count<<endl;
        }

        int count;
};
//函数对象可以作为参数传递
void doPrint(myPrint &m,string str)
{
    m(str);
}
void test()
{
    myAdd myadd;
    cout<<myadd(10,20)<<endl;

    myPrint myprint;
    myprint("hello world");
    myprint("hello world");
    myprint("hello world");
    myprint("hello world");
    myprint("hello world");

    cout<<"***************"<<endl;
    doPrint(myprint,"hello cpp");
}
    
int main()
{
    test();
    system("pause");
    return 0;
}