#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1>0)
    {
        long long n,i,j,sum=0;

        cin>>n;
        if(n==0)
            break;
        long c[n],p[n];

        for(i=0; i<n; i++)
            cin>>c[i];
        for(i=0; i<n; i++)
            cin>>p[i];

        sort(c,c+n);
        sort(p,p+n);

        for(i=0; i<n; i++)
        {
            sum+=c[i]*p[n-i-1];
        }
        cout<<sum<<"\n";
    }
}
