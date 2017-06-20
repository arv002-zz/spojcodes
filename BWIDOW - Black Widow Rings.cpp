#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long max1=0,max2=-1,index1,index2;
        long long a[n][2],i,j,k;

        for(i=0; i<n; i++)
        {
            cin>>a[i][0]>>a[i][1];
            if(max1<a[i][1])
            {
                max2=max1;
                max1=max(max1,a[i][1]);
                index1=i;
            }
            else if(max2<a[i][1])
            {
                max2=a[i][1];
            }
        }
        //cout<<max1<<" "<<max2;
        if(a[index1][0]>max2)
            cout<<index1+1<<"\n";
        else
            cout<<"-1\n";
    }
}
