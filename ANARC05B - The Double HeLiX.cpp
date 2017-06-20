#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;

    while(1>0)
    {
        cin>>n;
        if(n==0)
            break;
        long long i,j,k,sum1=0,sum2=0,sum=0;
        long long a[n];

        for(i=0; i<n; i++)
            cin>>a[i];

        cin>>m;
        long long b[m];

        for(j=0; j<m; j++)
            cin>>b[j];

        i=0;
        j=0;
        while(i<n || j<m)
        {
            if(a[i]==b[j])
            {
                sum1+=a[i];
                sum2+=b[j];
                sum+=max(sum1,sum2);
                //cout<<max(sum1,sum2)<<" ";
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
            else if(a[i]>b[j])
            {
                sum2+=b[j];
                j++;
            }
            else if(a[i]<b[j])
            {
                sum1+=a[i];
                i++;
            }
        }

        if(i<n)
        {
            for(k=i; k<n; k++)
                sum1+=a[k];
        }

         if(j<m)
        {
            for(k=j; k<m; k++)
                sum2+=b[k];
        }
        sum+=max(sum1,sum2);

        cout<<sum<<"\n";
    }
}
