#include<iostream>
#include<bits/stdc++.h>

using namespace std;


long long dp[2005][2005];

long long Min(long long a, long long b, long long c)
{
    if(a>b)
    {
        if(b<c)
            return b;
        else
            return c;
    }
    else
    {
        if(a<c)
            return a;
        else
            return c;
    }
}
long long EditDistance(string a, string b)
{
    long long int i,j,d;

    long long l1=a.length();
    long long l2=b.length();



    for(i=0; i<=l1; i++)
        dp[i][0]=i;

    for(i=0; i<=l2; i++)
        dp[0][i]=i;

    for(j=1; j<=l2; j++)
    {
        for(i=1; i<=l1; i++)
        {
            if(a[i-1]==b[j-1])
                d=0;
            else
                d=1;

            dp[i][j]= Min(dp[i-1][j]+1,
                          dp[i][j-1]+1,
                          dp[i-1][j-1]+d
                         );
        }
    }
    return dp[l1][l2];

}


int main()
{
    long long n,m,i,j,k,T;

    cin>>T;

    while(T--)
    {
        string a,b;
        cin>>a>>b;

        cout<<EditDistance(a,b)<<"\n";
    }

}
