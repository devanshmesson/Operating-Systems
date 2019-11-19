#include <bits/stdc++.h>
using namespace std;
int main()
{
    int la,pa,psize;
    cout<<"enter Page Size(in k words):";
    cin>>psize;
    psize=psize*pow(2,10);
    cout<<"Enter Logical address:";
    cin>>la;
    cout<<"Enter Physical address:";
    cin>>pa;
     int las=pow(2,la),pas=pow(2,pa);
     cout<<"Total no. of pages:"<<las/psize<<endl;
     cout<<"Total no.of frames:"<<pas/psize<<endl;


    return 0;
}
