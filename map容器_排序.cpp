#include<iostream>
#include<map>
using namespace std;

class myCompare
{
    public:
        bool operator()(int v1,int v2)
        {
            return v1>v2;
        }
};

void mapPrint(const map<int,string,myCompare>&mp)
{
    for(map<int,string,myCompare>::const_iterator it=mp.begin();it!=mp.end();it++)
    {
        cout<<"Key: "<<(*it).first<<" Value: "<<it->second<<endl;
    }
    cout<<endl;
}

void test()
{
    map<int,string,myCompare>m;
    m.insert(pair<int,string>(1,"a"));
    m.insert(pair<int,string>(2,"b"));
    m.insert(pair<int,string>(3,"c"));
    m.insert(pair<int,string>(4,"d"));
    m.insert(pair<int,string>(5,"e"));
    mapPrint(m);

    
}

int main()
{
    test();
    system("pause");
    return 0;
}