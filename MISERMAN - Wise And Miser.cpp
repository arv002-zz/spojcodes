#include<bits/stdc++.h>

using namespace std;
long long dp[105][105];

long long Min(long long a, long long b, long c)
{
    if(a<b)
    {
        if(a>c)
            return c;
        else
            return a;
    }
    else
    {
        if(b>c)
            return c;
        else
            return b;
    }
}

int main()
{

    long long T;


    long long  w,h,i,j,k;
    cin>>h>>w;


    for(i=0; i<=h; i++)
    {
        dp[i][0]=INT_MAX;
        dp[i][w+1]=INT_MAX;
    }

    for(i=1; i<=h; i++)
        for(j=1; j<=w; j++)
            cin>>dp[i][j];


    for(i=h-1; i>0; i--)
        for(j=1; j<=w; j++)
        {
            dp[i][j]+= Min((dp[i+1][j-1]),
                           (dp[i+1][j]),
                           (dp[i+1][j+1])
                          );
        }
    long long MAX=INT_MAX;

    for(j=1; j<=w; j++)
        MAX=min(MAX,dp[1][j]);

    cout<<MAX<<"\n";
}
