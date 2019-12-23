#include<iostream>
#include<map>
using namespace std;

void mapPrint(const map<int,string>&mp)
{
    for(map<int,string>::const_iterator it=mp.begin();it!=mp.end();it++)
    {
        cout<<"Key: "<<(*it).first<<" Value: "<<it->second<<endl;
    }
    cout<<endl;
}
void test()
{
    map<int,string>m;
    m.insert(pair<int,string>(1,"a"));
    m.insert(pair<int,string>(2,"b"));
    m.insert(pair<int,string>(3,"c"));
    m.insert(pair<int,string>(4,"d"));
    m.insert(pair<int,string>(5,"e"));
    mapPrint(m);

    map<int,string>m2(m);
    mapPrint(m2);

    map<int,string>m3;
    m3=m2;
    mapPrint(m3);
}

int main()
{
    test();
    system("pause");
    return 0;
}