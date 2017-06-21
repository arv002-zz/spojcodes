#include<bits/stdc++.h>
#include<list>
using namespace std;

void BFS(vector<list<int> > adjlist)
{
    list<int> ::iterator itr;

    int i,V=adjlist.size();

    bool *visited= new bool[V];
    for(i=0;i<V;i++)
        visited[i]=false;
    list<int> q;

    q.push_back(0);
    visited[0]=true;

    while(!q.empty())
    {
        //cout<<"fuck\n";
        int f=q.front();//front element of queue

        q.pop_front();
        cout<<f<<"\n";

        itr=adjlist[f].begin();

        while(itr!=adjlist[f].end())
        {
            if(visited[*itr]==false)
            {
                q.push_back(*itr);
                visited[*itr]=true;
            }
            itr++;
        }

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


    cout<<"After DFS:- \n";
    BFS(adjlist);
    //cout<<"yo ";


}
