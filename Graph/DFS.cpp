#include<bits/stdc++.h>

using namespace std;

void DFS (vector<list<int> > adjlist)
{
    int top,V;
    stack <int> s;
    V=adjlist.size();
    vector<bool> visited(V,false);

    s.push(0);

    list<int> :: iterator itr;
    while(!s.empty())
    {
        top=s.top();
        s.pop();
        if(!visited[top])
        {
            cout<<top<<" ";
            visited[top]=true;
        }
        for(itr=adjlist[top].begin(); itr!=adjlist[top].end(); itr++)
        {
            if(!visited[*itr])
                s.push(*itr);
        }
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

    cout<<"before DFS traversal\n";

   // for(i=0; i<nodes; i++)
   // {
   //     list<int>::iterator itr=adjlist[i].begin();
   //
   //     cout<<i<<" is connected to \n";
   //    while(itr!=adjlist[i].end())
   //    {
   //        cout<<*itr<<"\n";
   //        itr++;
   //    }
   // }

    cout<<"After DFS :-\n";

    DFS(adjlist);


}
