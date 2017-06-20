#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int t,N,K,T,F,sum;

    cin>>t;

    while(t--)
    {
        cin>>N>>K>>T>>F;

        sum=(F-N)/(K-1);

        sum=sum*K + N;
        cout<<sum<<"\n";
    }
}
