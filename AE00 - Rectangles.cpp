#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    long long i,j,n,k,sum=0;

    cin>>n;

    for(i=1; i<=n; i++)
        for(j=1; j<=sqrt(i); j++)
            if(i%j==0)
                sum++;

    cout<<sum;
}
