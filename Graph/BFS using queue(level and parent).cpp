#include<bits/stdc++.h>
#include<list>
using namespace std;

void BFS(vector<list<int> > adjlist, int parent[],int level[])
{
    list<int> ::iterator itr;
    int lev=0;
    level[0]=0;

    list<int> q;

    q.push_back(0);

    while(!q.empty())
    {
        //cout<<"fuck\n";
        int f=q.front();//front element of queue
        q.pop_front();
        cout<<f<<"\n";
        itr=adjlist[f].begin();

        while(itr!=adjlist[f].end())
        {
            if(level[*itr]==-1)
            {
                q.push_back(*itr);
                parent[*itr]=f;
                level[*itr]=lev+1;
            }
            itr++;
        }
        lev++;

    }

}

int main()
{
    int nodes,edges,v1,v2,w,i;

    cout<<"No. of vertices-\n";
    cin>>nodes;
    cout<<"No. of edges\n";
    cin>>edges;

    vector<list<int> > adjlist(nodes);

    for(i=0; i<edges; i++)
    {
        cin>>v1>>v2;

        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);
    }

    cout<<"Before DFS :- \n";

    for(i=0; i<nodes; i++)
    {
        list<int> :: iterator itr=adjlist[i].begin();

        cout<<i;
        while(itr!=adjlist[i].end())
        {
            cout<<" is connected to "<<*itr<<"\n";
            itr++;
        }
    }

    int parent[nodes]; //for storing the parent of each child
    int level[nodes]; //for storing level of each Nodes;

    for(i=0; i<nodes; i++)
    {
        level[i]=-1;
        parent[i]=0;
    }
    cout<<"After DFS:- \n";
    BFS(adjlist,parent,level);
    //cout<<"yo ";

    for (int i = 0; i <nodes; ++i)
        cout<<"Level of Node "<<i<<" is "<<level[i]<<" Parent is "<<parent[i]<<"\n";
}
