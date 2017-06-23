//store degree of all vertices
//first find the mindegree vertex apply dfs on that vertex
//in dfs if degree of that vertex is less than k then reduce the degree of all vertices connect to it by 1
//now check for all the degree of vertices of graph for <k 

#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<int> adj[],bool visited[], int degree[], int start,int nodes,int k)
{
    visited[start]=1;

    vector<int> :: iterator itr;
    for(itr=adj[start].begin(); itr!=adj[start].end(); itr++)
    {
        if(degree[start]<k)
            degree[*itr]--;

        if(!visited[*itr])
        {
            if(dfs(adj,visited,degree,*itr,nodes,k))
                degree[start]--;
        }
    }

    return (k>degree[start]);
}

void cores(vector <int > adj[], int k,int nodes)
{
    bool visited[nodes];
    int degree[nodes],min=INT_MAX,start,i,j;

    memset(visited,0,sizeof(visited));

    for(i=0; i<nodes; i++)
    {
        degree[i]=adj[i].size();
        if(min>degree[i])
        {
            min=degree[i];
            start=i;
        }
    }
    dfs(adj,visited,degree,start,nodes,k);

    for(i=0; i<nodes; i++)
        if(!visited[i])
            dfs(adj,visited,degree,i,nodes,k);

    cout<<"After k cores \n";
    for(i=0; i<nodes; i++)
    {
        if(degree[i]>=k)
        {
            cout<<i<<"-> ";
            for(j=0; j<adj[i].size(); j++)
            {
                if(degree[adj[i][j]]>=k)
                    cout<<adj[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
int main()
{
    int nodes,edges,v,u,i,j,k;

    cin>>nodes>>edges;
    cin>>k;

    vector<int > adj[nodes];

    for(i=0; i<edges; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"before k cores\n";

    for(i=0; i<nodes; i++)
    {
        cout<<i<<" -> ";
        for(j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }

    cores(adj,k,nodes);


}
