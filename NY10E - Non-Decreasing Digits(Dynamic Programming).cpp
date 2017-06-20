#include<bits/stdc++.h>

using namespace std;
long long a[10][65];
void Digits()
{
    long long i,j,k;
    for(i=0;i<10;i++)
        a[0][i]=1;

    for(i=1;i<65;i++)
        for(j=0;j<10;j++)
         for(k=0;k<=j;k++)
          a[i][j]+=a[i-1][k];

 /*for(i=0;i<65;i++)
    {for(j=0;j<10;j++)
     cout<<a[i][j]<<" ";
     cout<<"\n";}
*/

}

int main()
{
    long long T,i,j,Sum,N,K;

    cin>>T;
    Digits();
    while(T--)
    {
        cin>>K>>N;

        cout<<K<<" "<<a[N][9]<<"\n";
    }
}

