//Process Scheduling 
//Operating System
//First Come First Serve(FCFS) Algorithm
// taskkill /IM "a.exe" /F
#include<bits/stdc++.h>
using namespace std;
 
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin); freopen("out.txt","w",stdout);
#else 
#define freopen 
#endif
 
#define pb push_back
#define pf push_front
#define endl "\n"
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define int long long int
#define float double

struct node
{
  int data;
  node* next;
  node(int val){data=val; next=NULL;}
};

int f(node **q)
{
  (*q)->data=100;
  (*q)->next=new node(90);
}

signed main()
{
  freopen
  ios
  int n;
    cout<<"Please enter the number of Processes:";
    cin>>n;

    vector<int>vi;
    vector<pair<int,int>>turn;
    vector<int>waiting;
    vector<tuple<int,int,int>> vec;

    float sum=0;
    int Ariv,Burst,prev_completion=0,t;
    cout<<"Arrival time\t"<<"Bursting Time"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Ariv>>Burst;
        vec.push_back({Ariv,Burst,i+1});
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++)
    {
        Ariv=get<0>(vec[i]);
        Burst=get<1>(vec[i]);
        int process=get<2>(vec[i]);
        if(Ariv>prev_completion)prev_completion+=(Ariv-prev_completion);
        vi.push_back(Burst+prev_completion);
        t=Burst+prev_completion-Ariv;
        turn.push_back({process,t});
        waiting.push_back(t-Burst);
        sum+=t-Burst;
        prev_completion=prev_completion+Burst;
    }

    cout<<"Process   Completion time   Turn around Time   Waiting Time"<<endl;
    for(int i=0;i<n;i++)cout<<turn[i].first<<"                      "<<vi[i]<<"                      "<<turn[i].second<<"                    "<<waiting[i]<<endl;
    cout<<"Average Waiting time is : "<<sum/n<<endl;
}

/*1.Never overkill a problem.
  2.think of test cases to clarify the approach/doubts.
  3.Don't give up!
  4.Always pass array/string by reference in recursive function.Otherwise, it will be TLE!
  5.don’t use multiplication operator unless necessary, Otherwise, it will be TLE!
  6.Check datatype of variables, sometimes wrong datatype lead to WA.
*/ 
