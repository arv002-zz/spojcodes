#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,i;

    cin>>t;
    while(t--)
    {
        cin>>n;
        string s[n];
        for(i=0; i<n; i++)
            cin>>s[i];

        for(i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
                s[i+1]="hhb";
            else
                s[i+1]="lxh";
        }
        cout<<s[n-1]<<"\n";
    }
}
