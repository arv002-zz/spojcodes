#include<bits/stdc++.h>

using namespace std;

int main()
{

    while(1)
    {
        int n,i,j,k;
        cin>>n;

        if(n==0)
            break;
        if(n==1)
            cout<<"5\n";
        else if(n==2)
            cout<<"12\n";
        else
            cout<<5 +7*(n-1) +(3*(n-1)*(n-2))/2<<"\n";
    }
}
