#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,j,k;

    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,a+n);

    i=0;
    while(a[i]==a[i+1])
    {
        i=i+2;
    }
    printf("%d ",a[i]);
}
