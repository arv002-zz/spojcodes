#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        long long n,i,j,a,b,strt,ans=1;
        vector<pair<long long, long long> > v;

        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(b,a));
        }

        sort(v.begin(),v.end());

        strt=v[0].first;

        for(i=1; i<n; i++)
        {
            if(v[i].second>=strt)
            {
                strt=v[i].first;
                ans++;
            }
        }

        cout<<ans<<"\n";

    }
}
