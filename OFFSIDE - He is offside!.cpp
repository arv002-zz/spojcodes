#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long A, D;

    while(1)
    {
        cin>>A>>D;
        if(A==0 && D==0)
            break;
        long long a[A],d[D],i;
        for(i=0; i<A; i++)
            cin>>a[i];
        for(i=0; i<D; i++)
            cin>>d[i];
        sort(a,a+A);
        sort(d,d+D);

        if(a[0]>d[0] && a[0]>=d[1])
            cout<<"N\n";
        else if(a[0]==d[0] && a[0]==d[1])
            cout<<"N\n";
        else
            cout<<"Y\n";
    }
}
