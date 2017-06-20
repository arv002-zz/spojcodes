#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n,k,i,count=0;

    map<int,int> m;

    cin>>n>>k;
    long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        m.insert(make_pair(a[i],0));
    }

    for(i=0; i<n; i++)
    {
        if(m.count(a[i]+k)==1)
        {
            count++;
            //cout<<a[i]<<" ";
        }
    }

    cout<<count;
}
