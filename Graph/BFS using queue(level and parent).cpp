#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector < int > adj[100005];
int level[10005]={0};



void BFS(int start, int V)
{
    
    queue <int>q;
    q.push(start);
    
    //int V=adj.size();
    bool isvisited[V]={false};

    level[start]=1;
    int next,current;
    
    isvisited[start]=1;
    
    while(!q.empty())
    {
        int i;
        current=q.front();
        q.pop();
       // cout<<current<<" ";
        for(i=0;i<adj[current].size();i++)
        {
             next=adj[current][i];
            if(!isvisited[next])
             {
                 q.push(next);
                 isvisited[next]=true;
                 level[next]=level[current]+1;
             }
        }
        
    }
    
}



int main()
{
    //printf("Hello World!\n");
    int nodes,edges,i,j,k=0,v1,v2,start;
    
    cin>>nodes;
    edges=nodes-1;
    
    for(i=0;i<edges;i++)
    {
        cin>>v1>>v2;
        adj[v1-1].push_back(v2-1);
        adj[v2-1].push_back(v1-1);
        
    }
    
    int lev,count=0;
    cin>>lev;
    
    
    BFS(0,nodes);
    
    for(i=0;i<nodes;i++)
    {
        if(level[i]==lev)
         count++;
    }
    cout<<count<<"\n";
    return 0;
}
