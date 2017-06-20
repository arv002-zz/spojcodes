
#include<bits/stdc++.h>

using namespace std;

int lucky[1005];
int prime[1000]; //={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
int len;
inline bool primes(unsigned x)
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
    for (unsigned i = 2; i < 4000; i++)
    {
        if (primes(i))
        {
            prime[len++] = i;
        }
    }
}

int factor(int n)
{
    int count=0;

    for(int i=0; prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            count++;
            while(n%prime[i]==0)
                n/=prime[i];
        }
    }
    if(n>1)
        count++;
    return count;
}

void calc()
{
    int k=1;

    for(int i=30; i<3000; i++)
    {
        if(factor(i)>=3)
        {
            lucky[k]=i;
            k++;
        }
    }
}
int main()
{
    int t;

    cin>>t;
    generate();
    calc();
    while(t--)
    {
        int n;
        cin>>n;


        cout<<lucky[n]<<"\n";
    }
}
