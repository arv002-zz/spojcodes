#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n,id,i,j,k;
    map<int,int > m;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>id;

        m.insert(make_pair(id,-1));

        cin>>k;

        for(j=0; j<k; j++)
        {
            cin>>id;
            m.insert(make_pair(id,-1));
        }

    }
    cout<<m.size()-n;

}
