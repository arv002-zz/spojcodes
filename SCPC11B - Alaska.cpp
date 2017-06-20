#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,N,k;
    while(1)
    {
        cin>>N;

        if(N==0)
            break;

        int a[N];
        k=0;
        for(i=0; i<N; i++)
            cin>>a[i];

        sort(a,a+N);

        for(i=0; i<N-1; i++)
            if(a[i+1]-a[i]>200)
            {
                k=1;
                break;
            }


        if((1422-a[N-1])*2>200)
            k=1;

        if(k==1)
            cout<<"IMPOSSIBLE\n";
        else
            cout<<"POSSIBLE\n";



    }
}
