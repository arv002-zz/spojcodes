// If there are multiple mother vertex then we can just find only one mother vertex.
// it is for directed graph because in undirected graph all the vertex are mothers.
//Chillex
//yo

#include<bits/stdc++.h>
using namespace std;


void dfs(bool visited[], vector <int> adjlist[], int s)
{
    //cout<<s<<" ";
    visited[s]=1;
    int next,i;
    for(i=0; i<adjlist[s].size(); i++)
    {
        next=adjlist[s][i];
        if(!visited[next])
            dfs(visited,adjlist,next);
    }

}


int main()
{
    int nodes,edges,v1,v2,i,source,v;

    cout<<"No. of Nodes-\n";
    cin>>nodes;

    cout<<"No. of edges-\n";
    cin>>edges;

    cout<<"Source Node\n";
    cin>>source;

    vector< int > adjlist[edges];
    for(i=0; i<edges; i++)
    {
        cin>>v1>>v2;

        adjlist[v1].push_back(v2);
    }

    bool visited[nodes];

    for(i=0; i<nodes; i++)
        visited[i]=false;

    for(i=0; i<nodes; i++)
    {
        if(!visited[i])
        {
            dfs(visited,adjlist,i);
            v=i;
        }
    }
    for(i=0; i<nodes; i++)
        visited[i]=false;
    dfs(visited,adjlist,v);

    for(i=0; i<nodes; i++)
        if(visited[i]=false)
            cout<<"No Mother\n";

    cout<<v<<"yo mother";
}
