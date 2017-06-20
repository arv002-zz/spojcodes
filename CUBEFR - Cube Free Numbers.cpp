#include<bits/stdc++.h>

using namespace std;

int a[1000005]= {0};
void CubeFree()
{
    int i,j,k;

    for(i=2; i<=100; i++)
    {
        if(a[i]==0)
        {
            k=i*i*i;

            for(j=k; j<=1000000; j+=k)
                a[j]=-1;
        }
    }

    k=1;
    for(i=1; i<=1000000; i++)
        if(a[i]==0)
            a[i]=k++;
}

int main()
{
    int i,T,N,j,k=1;

    cin>>T;

    CubeFree();

    while(T--)
    {
        cin>>N;
        cout<<"Case "<<k<<": ";
        if(a[N]!=-1)
            cout<<a[N]<<"\n";
        else
            cout<<"Not Cube Free\n";
        k++;

    }
}
