#include<bits/stdc++.h>
using namespace std;
int main()
{
    int art[5]= {0,3,4,5,5};
    int bt[5]= {2,4,3,3,1};
    int wt[5];
    int st[5];
    int tt=0;
    for(int i=0; i<5; i++)
    {
        if(art[i]>tt)
        {

            st[i]=art[i];
            tt=st[i]+bt[i];
        }
        else
        {
            st[i]=tt;
            tt+=bt[i];
        }
       // cout<<st[i]<<endl;



    }
        int twt=0,ttt=0;
        for(int i=0; i<5; i++)
        {
            twt+=(st[i]-art[i]);
            ttt+=bt[i]+(st[i]-art[i]);
        }
        cout<<"Process       :";
        for(int i=1; i<=5; i++)
            cout<<i<<" ";
        cout<<endl;
        cout<<"Arrival Time  :";
        for(int i=0; i<5; i++)
            cout<<art[i]<<" ";
        cout<<endl;
        cout<<"Bust Time     :";
        for(int i=0; i<5; i++)
            cout<<bt[i]<<" ";
        cout<<endl;
        cout<<"Average Waiting time     :"<<twt/5.00<<endl;
        cout<<"Average Turnaround Time  :"<<ttt/5.00<<endl;
    // cout<<endl;


}
