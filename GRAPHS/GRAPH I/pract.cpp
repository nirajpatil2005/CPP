#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int u,int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print()
    {
        for(int u=0;u<V;u++)
        {
            list<int>neighbour=l[u];
            cout<<u<<":";
            for(int ele:neighbour)
            {
                cout<<ele<<",";
            }
            cout<<endl;
        }
    }
    void bfs(int u,vector<bool>&vis)
    {
        queue<int>q;
        vis[0]=true;
        q.push(0);
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            cout<<temp<<" ";
            list<int>neighbours=l[temp];
            for(int ele:neighbours)
            {
                if(!vis[ele])
                {
                    vis[ele]=true;
                    q.push(ele);
                }
            }
        }
    }
    void dfs(int u,vector<bool>&vis)
    {
        vis[u]=true;
        cout<<u<<" ";
        list<int>neighbour=l[u];
        for(int ele:neighbour)
        {
            if(!vis[ele])
            {
                vis[ele]=true;
                vis.push_back(ele);
                dfs(ele,vis);
            }
        }
    }
};
int main()
{
    Graph graph(7);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);
    graph.print();
    vector<bool>vec(7,false);
   cout<<"BFS: ";graph.bfs(0,vec);
    vector<bool>arr(7,false);cout<<endl;
    cout<<"DFS: ";graph.dfs(0,arr);
}