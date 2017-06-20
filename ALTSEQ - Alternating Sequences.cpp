#include<bits/stdc++.h>

using namespace std;
long long lis[5005];
long long LIS(long long a[],long long n)
{

    long long i, j, max = 0;

    for (i = 0; i < n; i++ )
        lis[i] = 1;

    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ )
            if (abs(a[i]) > abs(a[j])&&
                    lis[i] < lis[j] + 1
               )
            {
                if((a[i]>0 && a[j]<0)||(a[i]<0 && a[j]>0))
                    lis[i] = lis[j] + 1;

            }

    for (i = 0; i < n; i++ )
        if (max < lis[i])
            max = lis[i];



    return max;

}

int main()
{

    long long n,i,j;

    cin>>n;

    long long a[n];

    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<LIS(a,n);

}
