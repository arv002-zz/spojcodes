
#include<bits/stdc++.h>

using namespace std;
int Ball[10000005];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,i,j,M=0,total=0;
        cin>>n;
        int a[n],b[n];

        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        for(i=0,j=0;i<n&&j<n;)
        {
            if(a[i]<b[j])
                {total++;
            i++;}
            else
            {
                j++;
                total--;
            }
            M=max(total,M);
        }
        cout<<M<<"\n";




       /* for(i=0;i<10000005;i++)
            Ball[i]=0;

        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            M=max(M,b);
            for(j=a;j<=b;j++)
                Ball[j]+=1;
        }
        sort(Ball,Ball+M+1);

        //for(i=0;i<M+1;i++)
            cout<<Ball[M]<<" ";
     */
    }
}
