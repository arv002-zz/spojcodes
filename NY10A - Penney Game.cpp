#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<string>

using namespace std;

int main()
{

    map <string, int> M;
    string coins[8];
    coins[0]="TTT";
    coins[1]="TTH";
    coins[2]="THT";
    coins[3]="THH";
    coins[4]="HTT";
    coins[5]="HTH";
    coins[6]="HHT";
    coins[7]="HHH";
    int n,i,j;
    cin>>n;
    while(n--)
    {
        cin>>j;
        string temp;
        string s;
        cin>>s;
        M.clear();
        for(i=0; i<38; i++)
        {
            temp="";
            temp=temp+s[i];
            temp=temp+s[i+1];
            temp=temp+s[i+2];
            M[temp]++;
        }
        cout<<j;
        for(i=0; i<8; i++)
            cout<<" "<<M[coins[i]]<<" ";

        cout<<"\n";


    }
}
