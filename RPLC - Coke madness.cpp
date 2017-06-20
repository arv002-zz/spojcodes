#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,j=0;
    cin>>t;

    while(t--)
    {
        long long n;

        cin>>n;
        j++;

        long long i,a[n],sum;

        for(i=0; i<n; i++)
            cin>>a[i];

        sum=0;

        for(i=n-1; i>=0; i--)
        {
            if(a[i]<0)
                sum+=abs(a[i]);
            else if(a[i]>=sum)
            {
                sum=0;
            }
            else
            {
                sum-=a[i];
            }
        }
        cout<<"Scenario #"<<j<<": ";
        if(sum<0)
            cout<<"1\n";
        else
            cout<<sum+1<<"\n";
    }
}
