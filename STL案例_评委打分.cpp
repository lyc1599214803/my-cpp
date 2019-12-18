#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<float>d1,d2,d3,d4,d5;
    vector<float>score;
    // for(int i=0;i<10;i++)
    // {
    //     d1.push_back(i+2);
    //     d2.push_back(i+1);
    //     d3.push_back(i+5);
    //     d4.push_back(i+4);
    //     d5.push_back(i+3);
    // }

    vector<deque<float>>v;
    v.push_back(d1);
    v.push_back(d2);
    v.push_back(d3);
    v.push_back(d4);
    v.push_back(d5);
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<10;j++)
        {
            v[i].push_back(j);
        }
    }
    cout<<"scores are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i].at(j)<<" ";
        }
        cout<<endl;
    }
    cout<<"*******************************************************"<<endl;
    for(int i=0;i<v.size();i++)
    {
        sort(v[i].begin(),v[i].end());
    }

    for(int i=0;i<v.size();i++)
    {
        v[i].pop_front();
        v[i].pop_back();
    }
    
    cout<<"scores are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i].at(j)<<" ";
        }
        cout<<endl;
    }
    cout<<"*******************************************************"<<endl;

    for(int i=0;i<v.size();i++)
    {
        float sum=0;
        for(int j=0;j<v[i].size();j++)
        {
            sum+=v[i].at(j);
        }
        score.push_back(sum);
    }
    cout<<"*******************************************************"<<endl;
    for(int i=0;i<score.size();i++)
    {
        cout<<score[i]/8<<endl;
    }
    system("pause");
    return 0;
}