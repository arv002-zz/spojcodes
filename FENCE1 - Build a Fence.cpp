#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    double l;
    while(1)
    {

        cin>>l;
        if(l==0)
            break;
        double a;
        a=((l*1.0)*(l*1.0))/(2*3.14159) ;
        cout<<fixed<<setprecision(2)<<a<<"\n";
    }
}
