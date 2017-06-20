#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T;

    cin>>T;
    while(T--)
    {
        long long i,j,term,last,sum,n,r,a;
        cin>>term>>last>>sum;

        n=(sum*2)/(term+last);

        cout<<n<<"\n";

        r=(last-term)/(n-5);

        a=term-2*r;

        for(i=0; i<n; i++)
            cout<<a+i*r<<" ";

        cout<<"\n";
    }


}

