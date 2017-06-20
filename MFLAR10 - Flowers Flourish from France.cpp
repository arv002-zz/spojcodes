
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    while(1)
    {
        char a[1005];

        gets(a);
        //cout<<a;

        if(a[0]=='*')n
            break;

        int K=1,i,L=strlen(a);

        a[0]=toupper(a[0]);
        char c=a[0];
        for(i=1; i<L; i++)
        {
            if(a[i]==32)
            {
                //cout<<"fuck ";
                a[i+1]=toupper(a[i+1]);
                if(a[i+1]==c )
                    K=1;
                else
                {
                    K=0;
                    break;
                }
            }
        }
        //cout<<a;
        if(K==1)
            cout<<"Y\n";
        else
            cout<<"N\n";

    }
}
