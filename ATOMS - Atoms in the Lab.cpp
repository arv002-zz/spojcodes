#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long double N,K,M,j,i=0;
        cin>>N>>K>>M;
        if(N<M)
        {
            //j=((M*(K-1)*1.0)/(N*1.0))+1;
            j=((M/N)*(K-1)) +1;
            i=log(j)/log(K) ;
            cout<<(int)i<<"\n";
        }
        else cout<<"0\n";
    }
}
