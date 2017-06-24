//Hackerearth Dhoom4
//Samarpit is the main hero of the Dhoom 4.He is trying to steal from the Code Bank Of Hackers.
//Samarpit has a key with an integer value printed on it. He also has N other keys with each key 
//having its own specific value.Samarpit is trying to break the Lock for which he is supposed to 
//get to the lock's key value. He can perform one type of operation.Take his own key and one of 
//the other N keys and merge them.During merging Samarpit's Key value changes to product of both
//the keys modulus 100000.For example if his key value was X and he took a key with value Y the 
//his new key will be (X*Y)%100000.The other key that was used during the merging process remains
//along with other N-1 keys.This entire process of merging takes 1 second.Now since he is in a 
//hurry he asks to you to find the minimum time in which he could reach to the lock's key value.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    //return 0;

   
   int mod,i,j,key,lock,value,n;
   
   mod=100000;
   
   cin>>key>>lock;
   cin>>n;
   
   int a[n];
    
    for(i=0;i<n;i++)
     cin>>a[i];
    
   int visited[100005];
    memset(visited,-1,sizeof(visited));
    
    queue<int> q;
    
    q.push(key);
    visited[key]=0;
    
    while(!q.empty())
     {
         value=q.front();
         q.pop();
         if(value==lock)
           break;
           
           for(i=0;i<n;i++)
           {
               j=(value*a[i])%mod;
               
               if(visited[j]==-1)
               {
                   visited[j]=visited[value]+1;
                   q.push(j);
               }
           }
         
     }
    cout<<visited[lock]<<" ";
}
