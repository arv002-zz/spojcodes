#include<bits/stdc++.h>

using namespace std;
int a[1000005];
int main()
{
    int N,i,j,count,k;

    while(1)
    {
        count=0;
        cin>>N;

        if(N==0)
            break;

        for(i=0; i<N; i++)
            cin>>a[i];

        sort(a,a+N);

        for(k=N-1; k>1; k--)
        {
            i=0;
            j=k-1;
            while(i<j)
            {
                 while(a[i]+a[j]>=a[k] && i<j)
                {
                    j--;
                }
                count+=j-i;
                i++;

            }
        }
        cout<<count<<"\n";
    }
}
