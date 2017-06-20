#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long T,N,i,j,sum;

    cin>>T;
    while(T--)
    {
        cin>>N;

        long long a[N];
        sum=0;

        for(i=0; i<N; i++)
        {
            cin>>a[i];
            sum+=a[i]*i;
        }

        for(i=N-1; i>0; i--)
        {
            sum-=a[N-1-i]*i;
        }
        cout<<sum<<"\n";

    }
}
