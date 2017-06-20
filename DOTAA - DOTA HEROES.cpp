#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,D,m,n;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>D;

        long long a[n],i,j,sum=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];

            a[i]/=D+1;
            sum+=a[i];
        }
        if(sum>=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
