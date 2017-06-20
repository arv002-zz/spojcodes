
#include<bits/stdc++.h>

using namespace std;

//long long p[500000000];
int main()
{
    long long n,c,b,sum=0,i,j;

    cin>>c>>b>>n;
    long long a[b-c+3];

    for(i=0; i<=b-c; i++)
        a[i]=0;

    for(i=1; i<=b; i++)
        for(j=c; j<=b; j++)
            if(j%i==0)
                a[j-c]++;

    for(i=0; i<=b-c; i++)
        if(a[i]==n)
            sum++;
    cout<<sum;
}
