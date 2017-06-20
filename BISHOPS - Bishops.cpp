#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,j,k;

    while(cin>>n)
    {
        if(n==0 || n==1)
            cout<<n<<"\n" ;
        else
            cout<<2*n -2<<"\n";
    }
}
