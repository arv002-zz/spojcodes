#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T;

    cin>>T;

    while(T--)
    {
        long long i,j,k;
        long long a,b,c,d;
        long long p,q,r,s;

        cin>>a>>b>>c>>d;

        cin>>p>>q>>r>>s;


        //Case1:-Let both snake be horizontal
        if(b==d && q==s && b==q)
        {
            // two cases when a<c and c>a
            if(a<=p && c>=p)
                cout<<"yes\n";
            else if(a<=r && c>=r)
                cout<<"yes\n";
            else if(c<=p && a>=p)
                cout<<"yes\n";
            else if(c<=r && a>=r)
                cout<<"yes\n";
            else if(p<=a && r>=a)
                cout<<"yes\n";
            else if(p<=c && r>=c)
                cout<<"yes\n";
            else if(r<=a && p>=a)
                cout<<"yes\n";
            else if(r<=c && p>=c)
                cout<"yes\n";
            else
                cout<<"no\n";

        }
        //When both are vertical
        else if(a==c && p==r && a==p)
        {
            //Again two cases when b<d and b>d
            if(b<=q && d>=q)
                cout<<"yes\n";
            else if(b<=s && d>=s)
                cout<<"yes\n";
            else if(d<=q && b>=q)
                cout<<"yes\n";
            else if(d<=s && b>=s)
                cout<<"yes\n";
            else if(q<=b && s>=b)
                cout<<"yes\n";
            else if(q<=d && s>=d)
                cout<<"yes\n";
            else if(s<=b && q>=b)
                cout<<"yes\n";
            else if(s<=d && q>=d)
                cout<"yes\n";
            else
                cout<<"no\n";
        }
        // first one vertical and second one horizontal
        else if(a==c && q==s)
        {
            if(a==p && b==q)
                cout<<"yes\n";
            else if(a==r && b==s)
                cout<<"yes\n";
            else if(c==p && d==q)
                cout<<"yes\n";
            else if(c==r && d==s)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
        // first one horizontal and second one vertical
        else if(p==r && b==d)
        {
            if(p==a && q==b)
                cout<<"yes\n";
            else if(p==c && q==d)
                cout<<"yes\n";
            else if(r==a && s==b)
                cout<<"yes\n";
            else if(r==c && s==d)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
        else
            cout<<"no\n";

    }
}
