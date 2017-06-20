#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i,j,b,g;
    while(1)
    {
        cin>>g>>b;
        if(g==-1 || b==-1)
            break;
        long long ans, r;
        if(b>g)
        {
            b=b-g;
            g=b+g;
            b=g-b;
        }
        ans= g/(b+1);
        r=g%(b+1);
        if(r==0)
            cout<<ans<<"\n";
        else
            cout<<ans+1<<"\n";
    }
}
