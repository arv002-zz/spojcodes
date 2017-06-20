#include<iostream>
using namespace std;

int main()
{
    long long i,j,n;
    float c;

    while(1)
    {
        cin>>c;
        if(c==0.00)
            break;
        float sum=0.0;
        i=2;
        while(sum<=c)
        {
          sum+=1/i;
          i++;
        }
       cout<<i-1<<"\n";
    }
}
