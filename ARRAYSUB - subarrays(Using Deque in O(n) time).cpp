#include<bits/stdc++.h>

using namespace std;

void subarr(long long a[],long long n,long long k)
{
    deque<int> Q(k);
   long long i;
    for(i=0;i<k;i++)
    {
        while(!Q.empty() && a[i]>=a[Q.back()])
            Q.pop_back();

        Q.push_back(i);
    }

    for(i=k;i<n;i++)
    {
        cout<<a[Q.front()]<<" ";

        while(!Q.empty() && Q.front()<=i-k)
            Q.pop_front();

        while(!Q.empty() && a[i]>=a[Q.back()])
            Q.pop_back();

        Q.push_back(i);
    }

    cout<<a[Q.front()];
}

int main()
{
    long long n,k,i;

    cin>>n;

    long long a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    cin>>k;

    subarr(a,n,k);


}
