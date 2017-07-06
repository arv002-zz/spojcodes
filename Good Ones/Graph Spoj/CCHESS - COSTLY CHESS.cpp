#include<bits/stdc++.h>
using namespace std;

int a[8]= {1,2,2,1,-1,-2,-2,-1};
int b[]= {2,1,-1,-2,-2,-1,1,2};
int main()
{
    int T,i,j,n,m,p,r,v1,v2;

    //scanf("%d",&T);

     while(scanf("%d%d%d%d",&n , &m , &p ,&r)!=EOF)
    {
        //scanf("%d %d %d %d",&n,&m,&p,&r);
        int dist[8][8];

        for(i=0;i<8;i++)
            for(j=0;j<8;j++)
              dist[i][j]=INT_MAX;

        dist[n][m]=0;
        queue<pair<int,int> > q;
        q.push(make_pair(n,m));

        bool visited[9][9];
        int lev[9][9];

        memset(visited,0,sizeof(visited));
        memset(lev,0,sizeof(lev));

        while(!q.empty())
        {
            int u1=q.front().first;
            int u2=q.front().second;
            q.pop();

            visited[u1][u2]=1;

            for(i=0; i<8; i++)
            {
                v1=u1+a[i];
                v2=u2+b[i];

                if(v1<8 && v2<8 && v1>=0&& v2>=0)
                {
                    if( dist[v1][v2]>(dist[u1][u2]+u1*v1+u2*v2))
                    {q.push(make_pair(v1,v2));
                    dist[v1][v2]=dist[u1][u2]+u1*v1+u2*v2;
                    }

                }

            }
        }
        //cout<<lev[p][r]<<"\n";
        printf("%d\n",dist[p][r]);
    }
}
