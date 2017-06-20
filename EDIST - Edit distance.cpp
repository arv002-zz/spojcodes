#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long Min(long long a, long long b, long long c)
{
    if(a>b)
    {
        if(b<c)
            return b;
        else
            return c;
    }
    else
    {
        if(a<c)
            return a;
        else
            return c;
    }
}
long long EditDistance(string a, string b, long long length1,long long length2)
{
    int d;
    if(length1==0)
        return length2;
    if(length2==0)
        return length1;

    if(a[length1 -1]==b[length2 -1])
        d=0;
    else
        d=1;

    return Min(EditDistance(a,b,length1-1,length2)+1,EditDistance(a,b,length1,length2-1)+1,EditDistance(a,b,length1-1,length2-1) +d
              );

}


int main()
{
    long long n,m,i,j,k,T;

    cin>>T;

    while(T--)
    {
        string a,b;
        cin>>a>>b;

        long long length1=a.length();
        long long length2=b.length();

        cout<<EditDistance(a,b,length1,length2);
    }

}
