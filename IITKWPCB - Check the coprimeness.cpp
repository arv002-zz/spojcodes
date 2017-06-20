#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long  T,N,R,J;

    cin>>T;
    while(T--)
    {
        cin>>N;

        J=N/2;
        R=N%2;
        if(R==0)
        {
            if(J%2==0)
                cout<<J-1<<"\n";
            else
                cout<<J-2<<"\n";
        }
        else
        {
            cout<<J<<"\n";
        }
    }
}
