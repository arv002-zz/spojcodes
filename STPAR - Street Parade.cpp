#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    while(1)
    {
        long long n,i,j,k;

        cin>>n;
        if(n==0)
            break;
        stack<int> s1,s2;

        int a[n];

        while(!s1.empty())
            s1.pop();
        while(!s2.empty())
            s2.pop();

        for(i=0; i<n; i++)
            cin>>a[i];

        for(i=0; i<n; i++)
            s1.push(a[n-1-i]);

        i=1;
        k=1;

        while(i<n)
        {
            if(s1.empty()!=1)
            {
                if(s1.top()!=i && s2.empty()==1)
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                else if(s1.top()!=i && s2.top()!=i)
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                else if(s1.top()==i)
                {
                    s1.pop();
                    i++;
                }
                else if(s2.top()==i && s2.empty()!=1)
                {
                    s2.pop();
                    i++;
                }
            }
            else if(s2.top()==i)
            {
                s2.pop();
                i++;
            }
            else if(s2.top()!=i)
            {
                cout<<"no\n";
                k=0;
                break;
            }

        }
        if(k!=0)
            cout<<"yes\n";



    }
}
