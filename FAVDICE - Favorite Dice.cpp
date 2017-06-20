#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        double j,k=0.0;
        int n,m,i;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            j=(double)(n-i+1);
            k+=1.0/j ;
        }
        cout<<fixed<<setprecision(2)<<(double)n*k<<"\n";
    }
}
