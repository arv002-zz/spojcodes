#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,i,j,Max=0;

    cin>>n;

    long long a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    cin>>k;
    for(i=0; i<k; i++)
        Max=max(Max,a[i]);

    cout<<Max<<" ";

    for(i=k; i<n; i++)
    {
        if(a[i]>=Max)
        {
            Max=a[i];
            // cout<<Max<<" ";
        }
        else
        {
            if(a[i-k]==Max)
            {
                Max=a[i-k+1];
                for(j=i-k+1; j<=i; j++)
                    Max=max(Max,a[j]);
            }
        }
        cout<<Max<<" ";
    }
}
