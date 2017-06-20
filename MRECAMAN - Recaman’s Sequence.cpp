#include<bits/stdc++.h>

using namespace std;
long long a[500005];
int b[10000000]= {0};
int main()
{

    long long x,i;

    b[0]=1;
    a[0]=0;

    for(i=1; i<500005; i++)
    {
        x=a[i-1]-i;

        if(x>0 && b[x]==0)
        {
            a[i]=x;
            b[x]=1;
        }
        else
        {
            a[i]=a[i-1]+i;
            b[a[i-1]+i]=1;
        }
    }


    int n;
    cin>>n;
    while(n!=-1)
    {

        //cout<<n<<" ";
        cout<<a[n]<<"\n";
        cin>>n;

    }
    return 0;
}
