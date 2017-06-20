
    #include<bits/stdc++.h>

    using namespace std;
    int dp[105];


    int main()
    {

        int t;

        cin>>t;

        while(t--)
        {


            int n,k,i,j;

            cin>>n>>k;

            for(i=0; i<k+2; i++)
                dp[i]=100000;

            dp[0]=0;

            int a[k+1];

            for(i=1; i<k+1; i++)
                cin>>a[i];
            int count=0;

            for(i=1; i<=k; i++)
            {
                for(j=1; j<k+1; j++)
                {
                    if(a[j]!=-1)
                    {
                        if(j<=i)
                        {
                            dp[i]=min(dp[i],dp[i-j]+a[j]);
                        }
                    }
                }

            }

            if(dp[k]==100000)
                cout<<"-1\n";
            else
                cout<<dp[k]<<"\n";


        }
    }
