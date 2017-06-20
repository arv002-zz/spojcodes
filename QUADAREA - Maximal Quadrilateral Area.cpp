#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T;

    cin>>T;

    while(T--)
    {
        double a,b,c,d,s;
        cin>>a>>b>>c>>d;

        s=(a+b+c+d)/(2*1.0) ;
        a=s-a;
        b=s-b;
        c=s-c;
        d=s-d;

        cout<<fixed<<setprecision(2)<<sqrt(a*b*c*d)<<"\n";
    }
}
