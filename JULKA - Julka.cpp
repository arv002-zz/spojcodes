#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()

{
    int i,j,l1,l2,l3,t=10;



    while(t--)
    {
         string apples, morek;
    string k=""; string n="";
        cin>>apples>>morek;
        l1=apples.length();
        l2=morek.length();
        reverse(apples.begin(),apples.end());
        reverse(morek.begin(),morek.end());

        int carry=0,sub;
        for(i=0; i<l2; i++)
        {
            sub=((apples[i]-'0')-(morek[i]-'0')-carry);

            if(sub<0)
            {
                sub=sub+10;
                carry=1;
            }
            else
                carry=0;

            n.push_back(sub+'0');


        }

        for(i=l2; i<l1; i++)
        {

            sub=(apples[i]-'0')-carry;
            if(sub<0)
            {
                sub=sub+10;
                carry=1;
            }
            else
            carry=0;

            n.push_back(sub +'0');
        }

        reverse(n.begin(),n.end());


        l3=n.length();
        int p,j=0,r=0;
        for(i=0; i<l3; i++)
        {
            p=(n[i]-'0') +r*10;

            if(p==1)
            {
                if(i+1<l3)
                p=p*10 +(n[i+1]-'0');
                else
                p=p*10;

                r=p%2;
                n[j]=p/2 +'0';
                j++;
                i++;
            }
            else
            {
                r=p%2;
                n[j]=p/2+'0';
                j++;
            }


        }
        n.erase(j,i);
        l3=n.length();

        reverse(n.begin(),n.end());

        for(i=0; i<l3; i++)
        {
            sub=(apples[i]-'0')-(n[i]-'0')-carry;
            if(sub<0)
            {
                sub+=10;
                carry=1;
            }
            else
                carry=0;
            k.push_back(sub+'0');
        }

        for(i=l3; i<l1; i++)
        {
            sub=apples[i]-'0'-carry;
        if(sub<0)
            {
                sub=sub+10;
                carry=1;
            }
            else
            carry=0;

            k.push_back(sub+'0');
         }


        reverse(k.begin(),k.end());
        reverse(n.begin(),n.end());
        while(k[0]-'0'==0 && k.length()>1)
         k.erase(k.begin());
        while(n[0]-'0'==0 && n.length()>1)
         n.erase(n.begin());

         cout<<k<<"\n"<<n<<"\n";
    }



}
