#include<iostream>
using namespace std;

int min(int a , int b)
{
    return a<b?a:b;
}

int max(int a , int b)
{
    return a>b?a:b;
}
int main()
{
    long long T,a,n;

    cin>>T;

    while(T--)
    {

      cin>>n>>a;
      if(a==0)
      cout<<"Airborne wins."<<"\n";
      else
      cout<<"Pagfloyd wins."<<"\n";
    }
    return 0;
}
