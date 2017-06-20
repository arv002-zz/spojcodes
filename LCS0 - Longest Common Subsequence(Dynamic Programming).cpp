#include<iostream>

using namespace std;
long long dp[5005][5005];

int main()
{

    string a,b;
    cin>>a>>b;

    long long L1,L2,i,j;
    L1=a.length();
    L2=b.length();

    for(i=0; i<=L1; i++)
        for(j=0; j<=L2; j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;

            else if(a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1]+1;

            else
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }

    cout<<dp[L1][L2]<<"\n";

}
