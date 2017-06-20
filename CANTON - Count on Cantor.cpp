#include<iostream>
using namespace std;

int main()
{
    long long t,i,j;
    // i is numerator
    //j is denominator

    cin>>t;
    while(t--)
    {
        long long n,k=1;
        cin>>n;
        i=1;
        j=1;
        while(k<n)
        {
            k++;
            j++;
            if(k==n)
                break;
            while(j>1 && k<n)
            {
                j--;
                k++;
                i++;
            }
            if(k==n)
                break;
            i++;
            k++;
            if(k==n)
                break;
            while(i>1 && k<n)
            {
                i--;
                j++;
                k++;
            }

        }
        cout<<"TERM "<<n<<" "<<"IS "<<i<<"/"<<j<<"\n";
    }
}
