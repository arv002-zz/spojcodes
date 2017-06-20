
#include<bits/stdc++.h>

using namespace std;

long long p[32005],len;

inline bool prime(unsigned x)
{
    unsigned i;
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

void generate()
{
    len=0;
    for (unsigned i = 2; i < 32000; i++)
    {
        if (prime(i))
        {
            p[len++] = i;
        }
    }
}
inline bool IsPrime(unsigned long n)
{
    unsigned i;

    for(i=0; i<len&&p[i]<=sqrt(n); i++)
    {
        if(n%p[i]==0)
            return 0;
    }
    return 1;
}

int main()
{
    unsigned long i,j,t,n,m,k;

    cin>>t;
    generate();
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
            n++;
        for(i=n; i<=m; i++)
        {
            if(IsPrime(i))
                cout<<i<<"\n";
        }

    }


}
