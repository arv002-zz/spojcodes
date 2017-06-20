#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,b;
    cin>>k;
    while(k--)
    {
        string s;

        b=0;

        cin>>s;

        j=s.length();

        for(i=0; i<j/2; i++)
            if(s[i]!=s[j-1-i])
            {
                cout<<"NO\n";
                b=1;
                break;
            }
        if(b==0)
            cout<<"YES\n";
    }
}
