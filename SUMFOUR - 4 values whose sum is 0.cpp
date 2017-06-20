#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int n;

    cin>>n;

    unordered_map<int,int> m;
    m.reserve(16000000); //reserve the memory
    int a[n],b[n],c[n],d[n],i,j;

    for(i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i]>>d[i];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                m[(a[i]+b[j])]++;

            }
        }
     int count=0,t;
     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
     {
         t=-c[i]-d[j];
         if(m.find(t)!=m.end())
            count+=m[t];
     }
     cout<<count;
}
