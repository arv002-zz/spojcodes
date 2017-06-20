#include<iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if(b==0)
        return a;
    a%=b;
    return gcd(b,a);
}

long long lcm(long long a, long long b)
{
    return (a*b)/gcd(a,b) ;
}

int main()
{
    long long a, b;
    while(1)
    {
        cin>>a>>b;

        if(a==0 && b==0)
            break;
        //long long g=gcd(a,b);
        //g*=g;
        cout<<lcm(a,b)/gcd(a,b)<<"\n";
    }
}
