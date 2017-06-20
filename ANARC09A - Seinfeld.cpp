#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    while(1)
    {
        int i;
        int count1=0,count2=0;
        string s;
        cin>>s;
        if(s[0]=='-')
            break;
        int L=s.length();

        i=0;
        while(i<L)
        {
            if(s[i]=='{')
                count1++;
            else
            {
                count1--;
                if(count1<0)
                {
                    count1=1;
                    count2++;
                }
            }
            i++;
        }

        n++;
        cout<<n<<"."<<count1+(count2)/2<<"\n";
    }
}
