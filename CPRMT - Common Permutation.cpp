#include<bits/stdc++.h>


char c[26];
using namespace std;
const int MAXN=1010;

char a[MAXN],b[MAXN];
int main()
{

    while (scanf("%s%s",a,b)!=EOF)
    {
        for(int i=0; i<26; i++)
            c[i]=0;

        for(int i=0; i<strlen(a); i++)
            c[a[i]-'a']++;

        int l=strlen(b);
        sort(b,b+l);

        for(int i=0; i<l; i++)
        {
            if(c[b[i]-'a']>0)
            {
                cout<<b[i];
                c[b[i]-'a']--;
            }
        }
        cout<<"\n";
    }
}
