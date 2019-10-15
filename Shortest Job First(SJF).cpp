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
        vec.push_back(make_pair(Burst,Ariv));
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++)
    {
        Ariv=vec[i].second;
        Burst=vec[i].first;
        c=c+Burst;
        vi.push_back(c);
        t=c;
        turn.push_back(c);
        waiting.push_back(c-Burst);
        sum+=t-Burst;


    }

    cout<<"Completion time   Turn around Time   Waiting Time"<<endl;
    for(int i=0;i<n;i++)cout<<vi[i]<<"                      "<<turn[i]<<"                    "<<waiting[i]<<endl;
    cout<<"Average Waiting time is : "<<sum/n<<endl;
}


