#include<iostream>

using namespace std;

int main()
{
    int t;
    long long a,b,c;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%lld%lld%lld",&a,&b,&c);
        cout<<(a*a)-(2*b)<<"\n";
    }
}
