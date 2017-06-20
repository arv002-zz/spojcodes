#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        string a;

        cin>>a;

        int scount=0,mcount=0,i,j,n;
        n=a.length();

        for(i=0; i<n; i++)
        {
            if(a[i]=='s')
                scount++;
            else
                mcount++;
        }

        for(i=0; i<n; i++)
        {
            if(a[i]=='m')
            {
                if(a[i+1]=='s')
                {
                    a[i+1]='0';
                    a[i]='0';
                    scount--;
                }
                else if(a[i-1]=='s')
                {
                    a[i]='0';
                    a[i-1]='0';
                    scount--;
                }
            }
            else if(a[i]=='s')
            {
                if(a[i-1]=='m')
                {
                    a[i]='0';
                    a[i-1]='0';
                    scount--;
                }
                else if(a[i+1]=='m')
                {
                    a[i]='0';
                    a[i+1]='0';
                    scount--;
                    i++;
                }
            }
        }

        if(scount>mcount)
            cout<<"snakes\n";
        else if(mcount>scount)
            cout<<"mongooses\n";
        else
            cout<<"tie\n";

    }
}
