#include<iostream>
#include<bits/stdc++.h>

using namespace std;
long long rec(long long n,long long sum,long long i)
{
    if(n==1)
        return 1;
    else if(n<=sum+1)
        return sum+1;
    else
        rec(n,sum+(6*i),i+1);

}
int main()
{

    long long sum,n,i,p;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        i=1;
        sum=0;
        p=rec(n,sum,i);

        if(p==n)
            cout<<"Y\n";
        else
            cout<<"N\n";

    }
}

