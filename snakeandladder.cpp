#include<iostream>
#include<list>
#include<map>

template<typename T>

class graph
{
    map<T,list<T> >adjlist;
  public:
    void addedge(T u,T v,bool bider=true)
    {
        adjlist[u].push_back(v);
        if(bider)
        {
            adjlist[v].push_back(u);
        }
    }

    void print()
    {
        for(auto node:adjlist)
        {
            cout<<node.first<<"-->";
            for(auto children:node.second)
            {
                cout<<children<<"  ";
            }
            cout<<endl;
        }

    }

    void BFS(T source)
    {
        queue<T>q;
        map<T,bool>visited;
        q.push(source);
        visited[source]=true;
        while(!q.empty())
        {
            T top=q.front();
            q.pop();
            cout<<top<<" ";
            for(auto child:adjlist[top])
            {
                if(!visited[child])
                {
                    q.push(child);
                    visited[child]=true;
                }
            }
        }

    }

    void sssp(T source,T dest)
    {
        queue<T>q;
        map<T,int>dist;
        map<T,T>parent;

        for(auto node:adjlist)
        {
            dist[node.first]=INT_MAX;
        }
        q.push(source);
        dist[source]=0;
        parent[source]=source;
        while(!q.empty())
        {
            T top=q.front();
            q.pop();
            for(auto child:adjlist[top])
            {
                if(dist[child]!=INT_MAX)
                {
                    q.push(child);
                    dist[child]=1+dist[top];
                    parent[chid]=top;
                }
            }
        }
        T temp=des;
        while(temp!=source)
        {
            cout<<temp<<"<--";
            temp=parent[temp];
        }
        cout<<source<<endl;

        for(auto node:dist)
        {
            cout<<node.first<<"  "<<node.second<<endl;
        }

    }
};


int main()
{
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17]=-13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;




    graph<int>g;

    for(int u=0;u<=36;u++)
    {
        for(int dice=1;dice<=6;dice++)
        {
            int v=u+dice+board[u+dice];
            g.addedge(u,v,false);
        }
    }

    g.sssp(0,36);
    return 0;
}
