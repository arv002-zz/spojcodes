#include<bits/stdc++.h>

using namespace std;
long long sum=0;



int main()
{

    long long t;
    cin>>t;
    while(t--)
    {


        long long N,M;

        cin>>N>>M;

        long long a[N],i,k=0,j=0,current=0,MIN1=0,MIN2=INT_MAX;

        for(i=0; i<N; i++)
            cin>>a[i];

        for(i=0; i<N; i++)
        {
            if(current+a[i]<=M)
            {
                current+=a[i];
                k++;
            }
            else
            {
                current+=a[i];
                k++;
                while(current>M)
                {
                    current-=a[j];
                    k--;
                    j++;
                }
            }
            if(k>MIN1)
            {
                MIN1=k;
                MIN2=current;
            }
            else if(MIN1==k)
            {
                if(MIN2>current)
                    MIN2=current;
            }



        }

        cout<<MIN2<<" "<<MIN1<<"\n";

    }

}

