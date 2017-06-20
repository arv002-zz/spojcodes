#include<bits/stdc++.h>

using namespace std;

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

        long long a[h][w];

        for(i=0; i<h; i++)
            for(j=0; j<w; j++)
                cin>>a[i][j];

        long long dp[h+1][w+1];

        for(i=0; i<w; i++)
            dp[0][i]=a[0][i];
            //cout<<dp[0][i]<<"a ";}

        for(i=0; i<h; i++)
            for(j=0; j<w; j++)
            {
                if(j-1<0)
                    {dp[i+1][j]=max(dp[i][j]+(a[i+1][j+1]),
                                           dp[i][j]+(a[i+1][j]) );
                     //cout<<a[i+1][j+1]<<"bhenchod"<<a[i+1][j]<<"madarchod"<<"\n";
                     //cout<<dp[i][j]<<" ";
                    }
                else if(j+1>=w)
                    dp[i+1][j]=max((dp[i][j]+a[i+1][j-1]),
                                 (dp[i][j]+a[i+1][j])
                                );
                else
                dp[i+1][j]= Max((dp[i][j]+a[i+1][j-1]),
                              (dp[i][j]+a[i+1][j+1]),
                              (dp[i][j]+a[i+1][j])
                             );
            }

          for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
                cout<<dp[i][j]<<" " ;

            cout<<"\n";
          }


    }
}
