
#include<bits/stdc++.h>
using namespace std;

long long int l1[1000005];
long long int l[1000005];

int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++)
    {
        int n,q;

        scanf("%d%d",&n,&q);

        int i,j,h;

        for(j=0;j<n;j++)
            scanf("%lld",&l[j]);

        sort(l,l+n);

        l1[n-1]=l[n-1];

        for(j=n-2;j>=0;j--)
            l1[j]=l[j]+l1[j+1];

        for(j=0;j<q;j++)
        {
            long long int k;
            scanf("%lld",&k);
           // i=findk(l,0,n-1,k);
            int mid;
            int succ=-1;
            int low=0;
            int high=n-1;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(l[mid]<k)
                    low=mid+1;
                else
                {
                    //printf("dfg");
                    succ=mid;
                    high=mid-1;
                }
            }
            int cnt=0;
        //    printf("%d\n",succ);
            if(succ!=-1)
                cnt=cnt+(n-1-succ)+1;
           // printf("%d\n",cnt);
            succ--;
            if(succ==-1)
            {
                h=0;
                succ=0;
            }
            else if(succ==-2)
            {
                h=n-1;
                succ=n-1;
            }
            else
                h=succ;
            //i=findk1(l1,0,t,k,h);
            low=0;
            high=succ;
            int e=succ;
            succ=-1;
            while(low<=high)
            {
                mid= low+(high-low)/2;
                if(high==n-1)
                    l1[high+1]=0;
                if(k*(high-mid+1)-(l1[mid]-l1[high+1])>mid)
                    low=mid+1;
                else
                {
                    succ=mid;
                    high=mid-1;
                }
            }
           // printf("%d\n",succ);
            if(succ!=-1)
                cnt=cnt+(e-succ)+1;
            printf("%d\n",cnt);
        }
    }
    return 0;
}
