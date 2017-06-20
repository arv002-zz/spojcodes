#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T;

    cin>>T;

    while(T--)
    {
        long long n,sum=0,i,j,k=0;

        char c='\0';

        while(c!='=')
        {
            cin>>n>>c;

            if(k==1 || k==0)
                sum+=n;
            else if(k==2)
                sum*=n;
            else if(k==3 && n!=0)
                sum/=n;
            else if(k==4)
                sum-=n;

            if(c=='=')
                break;

            if(c=='+')
                k=1;
            else if(c=='*')
                k=2;
            else if(c=='/')
                k=3;
            else if(c=='-')
                k=4;
        }
        cout<<sum<<"\n";
    }
}
