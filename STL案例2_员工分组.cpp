#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<ctime>
using namespace std;

class Worker
{
    public:
        string Name;
        int Salary;
};
void createWorker(vector<Worker>&w)
{
    string nameSeed="ABCDEFGHIJ";
    for(int i=0;i<10;i++)
    {
        Worker worker;
        worker.Name="Worker-";
        worker.Name+=nameSeed[i];
        worker.Salary=rand()%10000+10000;
        w.push_back(worker);
    }
}
void setGroup(vector<Worker>&vWorker,multimap<int,Worker>&mWorker)
{
    for(int i=0;i<10;i++)
    {
        int num=rand()%3+1;
        mWorker.insert(pair<int,Worker>(num,vWorker[i]));
    }
}
void showWorkerbyGroup(multimap<int,Worker>&w)
{
    cout<<"the first group is here:"<<endl;
    for(multimap<int,Worker>::iterator it=w.begin();it!=w.end();it++)
    {
        if(it->first==1)
        {
            cout<<it->second.Name<<"  "<<it->second.Salary<<endl;
        }
    }
    cout<<endl;
    cout<<"the second group is here:"<<endl;
    for(multimap<int,Worker>::iterator it=w.begin();it!=w.end();it++)
    {
        if(it->first==2)
        {
            cout<<it->second.Name<<"  "<<it->second.Salary<<endl;
        }
    }
    cout<<endl;
    cout<<"the third group is here:"<<endl;
    for(multimap<int,Worker>::iterator it=w.begin();it!=w.end();it++)
    {
        if(it->first==3)
        {
            cout<<it->second.Name<<"  "<<it->second.Salary<<endl;
        }
    }
}
void test()
{
    vector<Worker>vWorker;
    createWorker(vWorker);
    for(vector<Worker>::iterator it=vWorker.begin();it!=vWorker.end();it++)
    {
        cout<<it->Name<<"  "<<it->Salary<<endl;
    }
    cout<<"*********************"<<endl;

    multimap<int,Worker>mWorker;
    setGroup(vWorker,mWorker);
    for(multimap<int,Worker>::iterator it=mWorker.begin();it!=mWorker.end();it++)
    {
        cout<<it->first<<" "<<it->second.Name<<" "<<it->second.Salary<<endl;
    }
    cout<<"*********************"<<endl;

    showWorkerbyGroup(mWorker);
}

int main()
{
    srand((unsigned int)time(NULL));
    test();
    system("pause");
    return 0;
}