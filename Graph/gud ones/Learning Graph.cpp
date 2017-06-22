/*
////// hackerearth problem/////

Monk once went to the graph city to learn graphs, and meets an undirected graph having 
N
N nodes, where each node have value 
v
a
l
[
i
]
val[i] where 
1
≤
i
≤
N
1≤i≤N. Each node of the graph is very curious and wants to know something about the nodes which are directly connected to the current node.

For each node, if we sort the nodes (according to their values), which are directly connected to it, in descending order (in case of equal values, sort it according to their indices in ascending order), then what will be the number of the node at 
k
t
h
kth position, if positions are given starting from 1.

Note: If the values are same , then sort it

Now Graph gave this task to Monk. Help Monk for the same.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int a[1005];
 
bool myfunction(int i, int j){
    if(a[i]==a[j])
     return i<j;
     else
     return a[i]<a[j];
}
int main()
{
    //cout << "Hello World!" << endl;
    //return 0;
    
    int nodes,edges,k,i,b,c,v1,v2;
    
    cin>>nodes>>edges>>k;
    
    for(i=0;i<nodes;i++)
     cin>>a[i];
     
    for(i=0;i<edges;i++)
    {
        cin>>v1>>v2;
        adj[v1-1].push_back(v2-1);
        adj[v2-1].push_back(v1-1);
    }
    //sort(a,a+n);
    for(i=0;i<nodes;i++)
    {
        int size=adj[i].size();
        if(k>size)
         cout<<"-1\n";
        else
        {
            sort(adj[i].begin(),adj[i].end(), myfunction);
            
            cout<<adj[i][size-k]+1<<"\n";
        }
    }
    
}
