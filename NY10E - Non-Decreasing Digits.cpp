#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T,i,j,Sum,N,K;

    cin>>T;

    while(T--)
    {
        cin>>K>>N;
        Sum=1;
        for(i=0; i<N; i++)
        {
            Sum*=(10+i);

            Sum/=i+1;
        }
        cout<<K<<" "<<Sum<<"\n";
    }
}
