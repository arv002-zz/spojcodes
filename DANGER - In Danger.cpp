#include<bits/stdc++.h>

using namespace std;


int main()
{

    string s;
    while(1)
    {

        long long n;
        cin>>s;
        if(s[0]=='0' &&s[1]=='0' && s[3]==0)
            break;
        n= ((s[0]-'0')*10 + (s[1]-'0') )* pow(10,(s[3]-'0')) ;

        int c=1;
        while (c<=n)
            c<<=1;
        int ans=((n-(c>>1))<<1)+1;
        printf("%d\n",ans);
    }
}
