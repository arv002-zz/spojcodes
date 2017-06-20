#include<bits/stdc++.h>

using namespace std;
long long sum=0;



int main()
{

    long long N,M,MAX=0;

    cin>>N>>M;

    long long a[N],i,j=0,sum=0,current=0;

    for(i=0; i<N; i++)
        cin>>a[i];

    for(i=0; i<N; i++)
    {
        current+=a[i];
        if(current==M)
        {
            sum=current;
            break;
        }
        else if(current>M)
        {
            while(current>M)
            {
                current-=a[j];

                if(current==M)
                    sum=current;
                else if(current+a[i]<M)
                    current+a[i];
                j++;
            }
        }
        sum=max(current,sum);
    }

    cout<<sum;

}
