#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin>>N;

    while(N--)
    {
        long long i,s,j,k=2;
        cin>>s;

        long long a[s];

        for(i=0; i<s; i++)
            cin>>a[i];

        for(i=0; i<s/2; i++)
            if(a[i]!=i+1 || a[s-1-i]!=i+1)
                k=0;
        if(a[s/2]!=(s+1)/2)
            k=0;
        if(s%2==0)
            k=0;
        if(k==0)
            cout<<"no\n";
        else
            cout<<"yes\n";

        // if(s%2==0)
        //     cout<<"no\n";
        // else if(a[0]!=1 || a[s-1]!=1)
        //     cout<<"no\n";
        // else
        // {
        //     for(i=1; i<s/2; i++)
        //         if(a[i]!=i+1 && a[s-1-i]!=i+1)
        //         {
        //             k=0;
        //             exit ;
        //         }
        //     if(k==0)
        //         cout<<"no\n";
        //     else
        //         cout<<"yes\n";
        // }

    }

}
