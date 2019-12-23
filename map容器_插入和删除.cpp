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
    m.insert(make_pair(6,"f"));
    m.insert(map<int,string>::value_type(7,"g"));
    m[8]="h";
    mapPrint(m);

    cout<<"********************"<<endl;
    m.erase(m.begin());
    mapPrint(m);
    
    cout<<"********************"<<endl;
    m.erase(4);
    mapPrint(m);

    cout<<"********************"<<endl;
    m.erase(m.begin(),m.end());
    mapPrint(m);

    cout<<"********************"<<endl;
    m.clear();
    mapPrint(m);
}

int main()
{
    test();
    system("pause");
    return 0;
}