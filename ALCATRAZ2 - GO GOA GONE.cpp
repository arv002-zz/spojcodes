#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long b[][2],sum=0;
long long c[9][9];

long long money(long long a[],long long sum)
{

}
int main()
{
    long long i,j,k,n,a[8],sum=0;
    long long c[8]= {0};

    for(i=0; i<8; i++)
        cin>>a[i];

    cin>>k;



    for(i=0; i<k; i++)
        cin>>b[i][0]>>b[i][1];

    for(i=0; i<9; i++)
        for(j=0; j<9; j++)
            c[i][j]=0;

    money(a,sum);

}
