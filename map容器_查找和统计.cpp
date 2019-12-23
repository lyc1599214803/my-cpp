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
    
    map<int,string>::iterator pos=m.find(4);
    if(pos!=m.end())
    {
        cout<<"find successfully"<<endl;
        cout<<pos->first<<" "<<(*pos).second<<endl;
    }
    else
    {
        cout<<"not here"<<endl;
    }

    int num=m.count(2);
    cout<<num<<endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}