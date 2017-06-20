#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //code
    long long T;
    cin>>T;
    while(T--)
    {
        long long Nm, Ng,i,n,m;
        cin>>Ng>>Nm;

        long long a[Ng], b[Nm];

        for(i=0; i<Ng; i++)
            cin>>a[i];

        for(i=0; i<Nm; i++)
            cin>>b[i];

        n=a[0];
        m=b[0];

        for(i=1; i<Ng; i++)
            if(n<a[i])
                n=a[i];

        for(i=1; i<Nm; i++)
            if(m<b[i])
                m=b[i];

        if(n>=m)
            cout<<"Godzilla \n";
        else
            cout<<"MechaGodzilla \n";

    }
    return 0;
}
