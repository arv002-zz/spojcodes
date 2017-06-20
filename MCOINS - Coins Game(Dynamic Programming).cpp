#include<bits/stdc++.h>

using namespace std;
long long L,K,m,p[1000001];

int main()
{

    cin>>L>>K>>m;
    long long i;
    p[1]=1;
    p[L]=1;
    p[K]=1;
    p[0]=0;
    for(i=2; i<1000001; i++)
    {
        p[i]=0;
        if(i-1>=0 && p[i-1]!=1)
            p[i]=1;
        else if(i-K>=0 && p[i-K]!=1)
            p[i]=1;
        else if(i-L>=0 && p[i-L]!=1)
            p[i]=1;

    }

    long long a[m];

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<m; i++)
        if(p[a[i]]==1)
            cout<<'A';//<<p[a[i]];
        else
            cout<<'B';//<<p[a[i]];


}
