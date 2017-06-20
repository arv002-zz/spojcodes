#include<bits/stdc++.h>

using namespace std;
long long dp[105][105];

long long Max(long long a, long long b, long c)
{
    if(a<b)
    {
        if(b>c)
            return b;
        else
            return c;
    }
    else
    {
        if(a>c)
            return a;
        else
            return c;
    }
}

int main()
{

    long long T;

    cin>>T;

    while(T--)
    {
        long long  h,w,i,j,k;
        cin>>h>>w;


        for(i=0; i<=h; i++)
        {
            dp[i][0]=0;
            dp[i][w+1]=0;
        }

        for(i=1; i<=h; i++)
            for(j=1; j<=w; j++)
                cin>>dp[i][j];


        for(i=h-1; i>0; i--)
            for(j=1; j<=w; j++)
            {
                dp[i][j]+= Max((dp[i+1][j-1]),
                               (dp[i+1][j]),
                               (dp[i+1][j+1])
                              );
            }
        long long Max=0;
        for(j=1; j<=w; j++)
            Max=max(Max,dp[1][j]);

        cout<<Max<<"\n" ;
    }
}
