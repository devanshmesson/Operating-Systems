#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,d,a,b,cnt=0,t,flag=1,temp=-2,temp1=-2,f=0,f1;
    cout<<"Enter p of Logical Address:";
    cin>>p;
    cout<<"Enter d of Logical Address:";
    cin>>d;
    vector<pair<int,int>>v;
    vector<pair<int,int>>vec;

    for(int i=0;i<pow(2,p);i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        if(b!=-1)cnt++;
    }
    cout<<"Enter f and d of Physical Address:"<<endl;
    cin>>f1>>d;
    cout<<"Enter f and data of Physical Address:"<<endl;

    for(int i=0;i<f1;i++)
    {
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }

    cout<<"Enter page no. to search for:";
    cin>>t;

    for(int i=0;i<pow(2,p);i++)
    {
        if(v[i].first==t)
        {
            f=1;
            if(v[i].second==-1){cout<<"Page does not have any frames"<<endl;break;}
            else
            {
              temp=v[i].second;
              for(int i=0;i<f1;i++)
              {
                if(vec[i].second!=-1){temp1=vec[temp-1].second;cout<<"Memory Allocation is:"<<temp1<<endl;break;}
              }
            }

        }
    }
    if(f==0)cout<<"Page Does not exist"<<endl;
    else if(temp1==-2)cout<<"Frame does not exist"<<endl;





    return 0;
}
