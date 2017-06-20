#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<string>

using namespace std;

int main()
{
    long long n,i,j;
    cin>>n;
    long long steps=0;
    if(n<9)
    {
        n=n*n;
        steps++;
    }
    while(n>9)
    {
        long long sum=0;
        while(n>0)
        {
            sum=sum+pow((n%10),2);
            n=n/10;
        }
        n=sum;
        steps++;
    }
    if(n==1)
        cout<<steps<<"\n";
    else
        cout<<"-1"<<"\n";
}
