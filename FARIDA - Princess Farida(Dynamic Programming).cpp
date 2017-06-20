#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long i,j=0,t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        long long a[n];
        long long dp[100005];
        for(i=0; i<n; i++)
            cin>>a[i];

        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);

        for(i=2; i<n; i++)
            dp[i]=max(dp[i-1],dp[i-2]+a[i]);
        j++;
        cout<<"Case "<<j<<": "<<dp[n-1]<<"\n";
    }
}
