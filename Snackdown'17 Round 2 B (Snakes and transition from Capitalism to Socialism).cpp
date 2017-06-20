#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;

    cin>>t;

    while(t--)
    {
        long long n,m,i,j,k,Max=0,Min=INT_MAX;

        cin>>n>>m;

        long long a[n][m];

        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
             {
                cin>>a[i][j];
                Min=min(Min,a[i][j]);
                Max=max(Max,a[i][j]);
             }


    }
}
