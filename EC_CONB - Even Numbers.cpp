#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int N;
    cin>>N;

    while(N--)
    {
        long long i,j=0,k;
        cin>>k;

        if(k%2!=0)
        {
            cout<<k<<"\n";
            continue;
        }

        while(k!=0)
        {
            j=j << 1;
            j=j+(k&1);
            k=k>>1;
        }

        cout<<j<<"\n";
    }
}
