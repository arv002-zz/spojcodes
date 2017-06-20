#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T;
    cin>>T;

    while(T--)
    {
        long long n,k,i,j,p=1;

        cin>>n>>k;

        long long a[n];

        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        long long min1=INT_MAX;
        for(i=0;i<n-k+1;i++)
            if(a[i+k-1]-a[i]<min1)
             min1=a[i+k-1]-a[i];
        if(k==1)
            cout<<"0"<<"\n";
        else
            cout<<min1<<"\n";

    }

}
