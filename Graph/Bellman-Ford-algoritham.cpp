#include<bits/stdc++.h>

using namespace std;
typedef pair<int,int> PI;
int main()
{

    int i,nodes,edges,next,cur,u,v,w,src,j,k,nextdist;

    cin>>nodes>>edges;
    vector< PI> adj[nodes];

    for(i=0;i<edges;i++)
        {
           cin>>u>>v>>w;
           adj[u].push_back(make_pair(v,w));
        // adj[v].push_back(make_pair(u,w));
        }

        cin>>src;

        int dist[nodes];
        for(i=0;i<nodes;i++)
            dist[i]=INT_MAX;

        dist[src]=0;

        for(i=0;i<nodes-1;i++)
        {
            for(j=0;j<nodes;j++)
            {

                vector<PI>::iterator itr;
                for(itr=adj[j].begin();itr!=adj[j].end();itr++)
                {
                    next=(*itr).first;
                    nextdist=(*itr).second;
                    if(dist[next]>nextdist+ dist[j])
                    {
                        dist[next]=nextdist+dist[j];
                        //cout<<"yo\n";

                    }
                }
            }
        }

        bool cycle=0;

        for(i=0;i<nodes;i++)
        {
            for(j=0;j<adj[i].size();j++)
            {
                    next=adj[i][j].first;
                    nextdist=adj[i][j].second;
                    if(dist[next]>nextdist+ dist[i])
                    {
                        cycle=true;
                        i=nodes;
                        break;
                    }
            }
        }

        for(i=0;i<nodes;i++)
            cout<<dist[i]<<" ";
         cout<<"\n";
         cout<<cycle;
}
