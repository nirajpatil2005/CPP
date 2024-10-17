#include <iostream>
#include <vector>
#include <list>
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

public:
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print()
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbours = l[u];
            cout << u << ":" << " ";
            for (int ele : neighbours)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
    }
    void BFS()
    {
        queue<int> q;
        vector<int> vis(V, false);
        q.push(0);
        vis[0] = true;
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();
            cout << temp << " ";
            list<int> neighbours = l[temp];
            for (int ele : neighbours)
            {
                if (!vis[ele])//vis[ele]=false
                {
                    q.push(ele);
                    vis[ele] = true;
                }
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
    // graph.print();
    cout << endl<<"BFS OF GRAPH:";
    graph.BFS();
}