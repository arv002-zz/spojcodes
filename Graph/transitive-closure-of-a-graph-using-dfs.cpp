//This algo is use for getting info about if a path between node u and v exist or not.
// for this we use dfs for every node.

#include<bits/stdc++.h>

using namespace std;
vector<int> adj[1001];
bool tc[1001][1001];

void dfs(int s, int v)
{
    tc[s][v]=1;
    int i,j;
    for(i=0; i<adj[v].size(); i++)
        if(!tc[s][adj[v][i]])
            dfs(s,adj[v][i]);

}


int main()
{
    int nodes,edges,i,v,u,j;
    cin>>nodes>>edges;

    for(i=0; i<nodes; i++)
        for(j=0; j<nodes; j++)
            tc[i][j]=0;


    for(i=0; i<edges; i++)
    {
        cin>>v>>u;
        adj[v].push_back(u);
    }

    for(i=0; i<nodes; i++)
        dfs(i,i);

    //cout<<"enter your query\n";
    //cin>>u>>v;


    //if(tc[u][v]==1)
    //  cout<<"bitch please\n";
    for(i=0; i<nodes; i++)
    {
        for(j=0; j<nodes; j++)
            cout<<tc[i][j]<<" ";

        cout<<"\n";
    }

}
