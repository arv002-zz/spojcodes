#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a,long long b)
{
    if(b==0) return a;
    a%=b;
    return gcd(b,a);
}
int main()
{
    long long t;

    cin>>t;

    while(t--)
    {
        long long n,m,g;
        cin>>n>>m;
        g=gcd(n,m);
        //cout<<g<<"\n";

        cout<<m/g<<" "<<n/g<<"\n";
    }
}
