#include<bits/stdc++.h>

using namespace std;

long long LCS(string s)
{
    long long i,j,L=s.length();
    long long  dp[L+1][L+1];
    string a(s);
    reverse(s.begin(),s.end());

    for(i=0; i<=L; i++)
        for(j=0; j<=L; j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;

            else if(a[i-1]==s[j-1])
                dp[i][j]=dp[i-1][j-1]+1;

            else
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }

    return L-dp[L][L];
}

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        string s;

        cin>>s;
        cout<<LCS(s)<<"\n";
    }
}
