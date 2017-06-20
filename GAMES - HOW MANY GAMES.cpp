
#include<bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b)
{
    if(a<b)
        return gcd(b,a);
    if(b==0)
        return a;
    a%=b;
    return gcd(b,a);
}
int main()
{
    long long t;

    cin>>t;

    while(t--)
    {
        float deci;
        string n;
        cin>>n;
        long long m;

        m= atoi(n.c_str());
        //cout<<m<<" ";

        long long i,c=0,power,Flag=0, number=0;

        for(int i=n.length()-1; i>=0; i--)
        {
            if(n[i]=='.')
            {
                Flag=1;
                break;
            }
            else
            {
                c++;
            }

        }

        if(Flag==1)
        {
            for(int i=0; i<n.length(); i++)
            {
                if(n[i]!='.')
                {
                    number=number*10+n[i]-'0';
                }
            }
            power=pow(10,c);
            //cout<<number<<" "<<c<<" "<<power;
            cout<<power/gcd(number,power)<<"\n" ;
        }
        else
            cout<<"1\n";
    }


}
