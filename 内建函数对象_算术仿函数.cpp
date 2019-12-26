#include<iostream>
#include<functional>
using namespace std;

// plus 加法
// minus 减法
// multiplies 乘法
// divides 除法
// modulus 取模
// negate 取反

void test()
{
    negate<int>n;
    cout<<n(50)<<endl;

    plus<int>p;
    cout<<p(10,20)<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}