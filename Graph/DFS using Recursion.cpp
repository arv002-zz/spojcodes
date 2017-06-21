#include<bits/stdc++.h>

using namespace std;

void DFS(vector<list<int > > adjlist, bool visited[],int str)
{
    visited[str]=true;
    cout<<str<<" ";

    list<int> ::iterator itr;
    itr=adjlist[str].begin();

    while(itr!=adjlist[str].end())
    {
        if(!visited[*itr])
            DFS(adjlist,visited,*itr);
        itr++;
    }
}
int main()

{
    int nodes,edges,v1,v2,i;

    cout<<"No. of Nodes-\n";
    cin>>nodes;

    cout<<"No. of edges-\n";
    cin>>edges;

    vector<list<int> > adjlist(edges);
    for(i=0; i<edges; i++)
    {
        cin>>v1>>v2;

        adjlist[v1].push_back(v2);
    }

    bool visited[nodes];

    for(i=0; i<nodes; i++)
        visited[i]=false;

    int str=2;//should be given


    DFS(adjlist,visited,str);


}
