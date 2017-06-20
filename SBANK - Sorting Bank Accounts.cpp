#include <map>
#include <string>
#include <cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, t;
    string s;
    cin>>t;
    while(t--)
    {
        map<string, int> m;
        map<string, int> :: iterator it;
        scanf("%d\n", &n);
        for(i=0; i<n; i++)
        {
            getline(cin,s);
            m[s]++;
        }
        for(it=m.begin(); it!=m.end(); it++)
            cout<<it->first<<" "<<it->second<<"\n";
    }
    return 0;
}
