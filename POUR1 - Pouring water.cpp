#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,y,z,t,X,Y;
    cin>>t;
    while(t--)
    {
        cin>>X>>Y>>z;

        x=max(X,Y);
        y=min(X,Y);
        //cout<<x<<" "<<y;
        if( (x>=z) && (z%(__gcd(x,y))==0))
        {
            int a,b,count1,count2,d;
            a=0;
            b=0;
            count1=0;
            count2=0;

            while(1)
            {
                //cout<<a<<"a ";
                if(a==0)
                {
                    a+=x;
                    count1++;
                }
                else if(b==y)
                {
                    b-=y;
                    count1++;
                }
                else
                {
                    if(a>y-b)
                    {
                        a=a-(y-b);
                        b=y;
                    }
                    else
                    {
                        b+=a;
                        a=0;
                    }
                    count1++;
                }
                if(a==z || b==z)
                    break;
            }
            a=0;
            b=0;
            //cout<<count1<<" "<<count2;
            while(1)
            {
                if(b==0)
                {
                    b+=y;
                    count2++;
                }
                else if(a==x)
                {
                    a-=x;
                    count2++;
                }
                else
                {
                    if(b>x-a)
                    {
                        b=b-(x-a);
                        a=x;
                    }
                    else
                    {
                        a+=b;
                        b=0;
                    }
                    count2++;
                }
                if(a==z || b==z )
                    break;
            }
            d=min(count1,count2);
            cout<<d<<"\n";
        }
        else
            cout<<"-1\n";
    }
}
