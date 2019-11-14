//Process Scheduling 
//Operating System
//First Come First Serve(FCFS) Algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number of Processes:";
    cin>>n;

    vector<int>vi;
    vector<int>turn;
    vector<int>waiting;
    vector<pair<int,int>> vec;

    float sum=0;
    int Ariv,Burst,c=0,t;
    cout<<"Arrival time\t"<<"Bursting Time"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Ariv>>Burst;
        vec.push_back(make_pair(Ariv,Burst));
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++)
    {
        Ariv=vec[i].first;
        Burst=vec[i].second;
        vi.push_back(Burst+c);
        t=Burst+c-Ariv;
        turn.push_back(t);
        waiting.push_back(t-Burst);
        sum+=t-Burst;
        c=c+Burst;
    }

    cout<<"Completion time   Turn around Time   Waiting Time"<<endl;
    for(int i=0;i<n;i++)cout<<vi[i]<<"                      "<<turn[i]<<"                    "<<waiting[i]<<endl;
    cout<<"Average Waiting time is : "<<sum/n<<endl;
}
