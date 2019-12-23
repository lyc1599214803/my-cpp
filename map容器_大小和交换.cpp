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

    if(m.empty())
    {
        cout<<"map is empty"<<endl;
    }
    else
    {
        cout<<"size of map: "<<m.size()<<endl;
    }

    map<int,string>mm;
    mm.insert(pair<int,string>(11,"aa"));
    mm.insert(pair<int,string>(22,"bb"));
    mm.insert(pair<int,string>(33,"cc"));
    mm.insert(pair<int,string>(44,"dd"));
    mm.insert(pair<int,string>(55,"ee"));
    mapPrint(mm);

    cout<<"******************"<<endl;

    mm.swap(m);

    mapPrint(m);
    mapPrint(mm);

}

int main()
{
    test();
    system("pause");
    return 0;
}