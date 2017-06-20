#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long T,L;

    cin>>T;
    while(T--)
    {
        cin>>L;

        string s;

        cin>>s;

        long long i=0,k=0;

        char c='T';

        while(1)
        {
            while(s[i]=='.' && i!=L)
            {
                i++;
            }
            if(i==L && c!='H')
            {
                cout<<"Valid\n";
                break;
            }
            if(i==L && c=='H')
            {
                cout<<"Invalid\n";
                break;
            }
            if(s[i]==c)
            {
                cout<<"Invalid\n";
                break;
            }
            else
            {
                c=s[i];
                i++;
                if(i==L && c!='H')
                {
                    cout<<"Valid\n";
                    break;
                }
            }

        }
    }
}
