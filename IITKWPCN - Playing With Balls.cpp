#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long t,w,b;
    cin>>t;
    while(t--)
    {
        double ans=0;
        cin>>w>>b;

        if(b%2==1)
            ans=1;

        cout<<fixed<<setprecision(6)<<ans<<"\n";

    }
}
