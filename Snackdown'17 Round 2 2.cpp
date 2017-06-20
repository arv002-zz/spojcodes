
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;
        string a[2];

        int i,j,k,l,p,q,e;
        for(i=0; i<2; i++)
            cin>>a[i];

        i=0;
        j=3;
        n=n-1;
        while(i>0)
        {
            if((a[1][n-i]=='#' || j==1) && j!=0)
            {
                // row 1 me horizontal move karne ke liye
                if(a[1][n-1]=='#' && a[0][n-1]!='#' && a[0][n-i]=='#' && a[0][n-i1]!='1' )
                {
                    // if true then go downside
                    a[0][i]='1';
                    cout<<"z"<<" ";
                }
                else
                {
                a[1][i]='1';
                if(a[1][i+1]!='#' && a[0][i]!='#')
                {
                    cout<<"a"<<" ";
                    i=n;
                    break;
                }
                else if(a[0][i]=='#')
                {
                    //upper jane k liye
                    cout<<"b"<<" ";
                    j=0;
                }
                else if(a[1][i+1]='#')
                {
                    i++;
                    cout<<"c"<<" ";
                }
                }

            }
            else if((a[0][i]=='#' || j==0) &&j!=1)
            {
                // row 0 me horizontal move karne k liye
                a[0][i]='1';
                if(a[0][i+1]!='#' && a[1][i]!='#')
                {
                    i=n;
                    cout<<"d"<<" ";
                    break;
                }
                else if(a[1][i]=='#')
                {
                    j=1;
                    cout<<"e"<<" ";
                }
                else if(a[0][i+1]=='#')
                {
                    i++;
                    j=0;
                    cout<<"f"<<" ";
                }
            }
            else
                i++;
        }


        k=a[0].find('#');
        l=a[1].find('#');

        if(((k>0 && k<n)|| (l>0 &&l<n)))
            cout<<"no\n";
        else
            cout<<"yes\n";

        //for(i=0; i<2; i++)
        //cout<<a[i]<<"\n";

    }
}
