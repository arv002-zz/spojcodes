#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> PI;
int main()
{

    int nodes,edges,u,v,i,w,source;

    cin>>nodes>>edges;

   vector<PI> adj[nodes];

    for(i=0;i<edges;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        //adj[v].push_back(make_pair(u,w));
    }

    cin>>source;

    int dist[nodes];
    for(i=0;i<nodes;i++)
        dist[i]=INT_MAX;

       dist[source]=0;

    priority_queue<PI,vector<PI>,greater<PI> > q;
    // its the representation when we want to extract the no. with min. priority

    q.push(make_pair(0,source));
    //or you can write:- q.push_back(dist[source],source);

    int cur,next,nextdis;

    while(!q.empty())
    {
        cur=q.top().second;
        q.pop();
        cout<<cur<<"fuck\n";

        for(i=0;i<adj[cur].size();i++)
        {
            next=adj[cur][i].first;
            nextdis=adj[cur][i].second;

            if(dist[next]>(nextdis + dist[cur]))
               {
                   dist[next]=nextdis+dist[cur];
                   q.push(make_pair(dist[next],next));
               }
        }

    }

    for(i=0;i<nodes;i++)
        cout<<dist[i]<<" ";

}
