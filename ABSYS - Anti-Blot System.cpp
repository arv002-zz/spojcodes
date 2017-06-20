#include<bits/stdc++.h>

using namespace std;



int main()
{
    int i,j,T;
    cin>>T;

    while(T--)
    {
        string a,b,c;
        char o,p;

        cin>>a>>o>>b>>p>>c;
        //cout<<a<<o<<b<<p<<c;
        int len1=a.length();
        int len2=b.length();
        int len3=c.length();
        if(a.find("machula") != std::string::npos)
        {
            int num3=0;
            int num2=0,i;
            for(i=0; i<len2; i++)
                num2=10*num2+(b[i]-'0');
            for(i=0; i<len3; i++)
                num3=10*num3+(c[i]-'0');
            cout<<num3-num2<<" + "<<b<<" = "<<c<<"\n";
            continue;
        }
        if(b.find("machula") != std::string::npos)
        {
            int num3=0;
            int num1=0,i;
            for(i=0; i<len1; i++)
                num1=10*num1+(a[i]-'0');
            for(i=0; i<len3; i++)
                num3=10*num3+(c[i]-'0');
            cout<<a<<" + "<<num3-num1<<" = "<<c<<"\n";
              continue;
        }
        if(c.find("machula") != std::string::npos)
        {
            int num2=0;
            int num1=0,i;
            for(i=0; i<len1; i++)
                num1=10*num1+(a[i]-'0');
            for(i=0; i<len2; i++)
                num2=10*num2+(b[i]-'0');
            cout<<a<<" + "<<b<<" = "<<num1+num2<<"\n";
              continue;
        }


    }
    return 0;
}
