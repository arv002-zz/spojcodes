#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n,j,m,T;
    cin>>T;
    for(j=0; j<T; j++)
    {
        long long need,f,sum;
        cin>>need>>f;
        long long a[f];

        for(i=0; i<f; i++)
            cin>>a[i];
        sort(a,a+f);

        i=0,sum=0;
        while(sum<need && i<f)
        {
            sum+=a[f-1-i];
            i++;
        }
        cout<<"Scenario #"<<j+1<<":"<<"\n";
        if(sum<need)
            cout<<"impossible"<<"\n";
        else
            cout<<i<<"\n";

        cout<<"\n";
    }
}
