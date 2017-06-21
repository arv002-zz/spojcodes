/simple graph representation in C++ using STL

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int i,v,u,w,Vertex,Edge;

    cout<<"No. of vertices\n";
    cin>>Vertex;
    cout<<"No. of Edges\n";
    cin>>Edge;
    cout<<"Now tell me how the edges are connected in this format v1 v2 and weight\n";


    vector<list<pair<int, int> > >adjlist(Vertex);
    //This is how a list is declared!!!!
    // Or vector < pair<int,int> > adjlist[Vertex)];

    for(i=0; i<Edge; i++)
    {
        cin>>v>>u>>w;
        adjlist[v].push_back(make_pair(u,w));
        adjlist[u].push_back(make_pair(v,w));
    }
   
    
    // for printing the Graph :)
    for(i=0; i<adjlist.size(); i++)
    {
        cout<<"Edge "<<i<<" is connected to\n";

        list< pair<int, int> > :: iterator it;
        for(it=adjlist[i].begin(); it!=adjlist[i].end(); it++)
        {
            cout<<"\t"<<it->first<<" with weight = "<<it->second<<"\n";
        }
        //or
        
       /* 
       
       while(itr!=adjacencylist[i].end())
        {
            cout<<(*itr).first<<" "<<(*itr).second;
            ++itr;
        }
       
       */
    }
}
