#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long T,i;
    cin>>T;
    i=1;
    while(T--)
    {
        double r;

        cin>>r;
        cout<<"Case "<<i<<": ";
        cout << setprecision (2) << fixed << 4*r*r+ .25<<"\n";
        i++;
    }
}
