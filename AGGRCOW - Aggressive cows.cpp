#include<bits/stdc++.h>

using namespace std;

long long C;
long long n;

long long fun(long long x,long long a[])
{
    int i,cows=1;
    long long last=a[0];

    for(i=1; i<n; i++)
        if(a[i]-last>=x)
        {
            cows++;
            if(cows==C)
                return 1;
            last=a[i];
        }
    return 0;
}

long long binary_search(long long a[])
{
    long long mid,lo,hi;

    lo=0;
    hi=a[n-1];


    while(lo<hi)
    {
        mid=(lo+hi)/2;

        if(fun(mid,a)==1)
            lo=mid+1;
        else
            hi=mid;

    }

    return lo-1;


}

int main()
{
    long long T;

    cin>>T;

    while(T--)
    {
        long long i,j,k;

        cin>>n>>C;

        long long a[n];

        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        cout<<binary_search(a)<<"\n";
    }
}
