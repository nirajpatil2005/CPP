#include <iostream>
#include <list>
#include <vector>
#include <queue>
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
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        // l[v].push_back(u);
    }
    void print()
    {
        for (int u = 0; u < V; u++)
        {
        }
    }
    void dfshelper(int u, vector<bool> &vis)
    {
        list<int> neighbours = l[u];
        cout << u << " ";
        vis[u] = true;
        for (int ele : neighbours)
        {
            if (!vis[ele])
            {
                vis[ele] = true;
                dfshelper(ele, vis);
            }
        }
    }
    void dfs()
    {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfshelper(i, vis);
            }
            cout << endl;
        }
    }
    void bfshelper(int u, vector<bool> &vis)
    {
        queue<int> q;
        q.push(u);
        vis[u] = true;
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();
            cout << temp << " ";
            list<int> neighbour = l[temp];
            for (int ele : neighbour)
            {
                if (!vis[ele])
                {
                    q.push(ele);
                    vis[ele] = true;
                }
            }
        }
    }
    void bfs()
    {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                 bfshelper(i, vis);
            }
            cout<<endl;
        }
    }
};  
int main()
{
    Graph graph(10);
    // graph.addEdge(2,1);
    graph.addEdge(0, 2);
    graph.addEdge(2, 5);
    graph.addEdge(1, 6);
    graph.addEdge(6, 4);
    graph.addEdge(4, 3);
    graph.addEdge(4, 9);
    graph.addEdge(3, 8);
    graph.addEdge(3, 7);
    cout << "DFS:";
    graph.dfs();
    cout << "BFS:";
    graph.bfs();
    return 0;
}