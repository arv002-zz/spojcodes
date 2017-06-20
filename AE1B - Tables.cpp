#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n,k,s,i,ans=0,ans1;

    cin>>n>>k>>s;

    long long a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ans1=k*s;
    //cout<<ans<<" ";
    i=0;

    while(ans<ans1)
    {
        ans=ans+a[n-1-i];
        i++;
    }

    cout<<i<<"\n";
}
