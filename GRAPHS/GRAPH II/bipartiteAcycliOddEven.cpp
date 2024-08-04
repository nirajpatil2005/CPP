// graph coloring
#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    bool isundir;

public:
    Graph(int V, bool undir = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->isundir = undir;
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        if (isundir)
        {
            l[v].push_back(u);
        }
    }
    void print()
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbours = l[u];
            cout << u << ":😣" << " ";
            for (int ele : neighbours)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
    }
    bool dirCycleHelper(int src, vector<bool> &vis, vector<bool> &recpath)
    {
        vis[src] = true;
        recpath[src] = true;
        list<int> neighbours = l[src];
        for (int ele : neighbours)
        {
            if (!vis[ele])
            {
                if (dirCycleHelper(ele, vis, recpath))
                    return true;
            }
            else
            {
                if (recpath[ele])
                    return true;
            }
        }
        recpath[src] = false;
        return false;
    }
    bool iscycleDir()
    {
        vector<bool> vis(V, false);
        vector<bool> recursionpath(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (dirCycleHelper(i, vis, recursionpath))
                    return true;
            }
        }
        return false;
    }
    bool unDirCycleHelper(int src, int par, vector<bool> &vis)
    {
        vis[src] = true;
        list<int> neighbours = l[src];
        for (int ele : neighbours)
        {
            if (!vis[ele])
            {
                vis[ele] = true;
                unDirCycleHelper(ele, src, vis);
            }
            else
            {                   // if ele is not visited and !=to parent
                if (ele != par) // cycle condn
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isBipartite()
    {
    }
};
int main()
{
    // graph coloring
    Graph graph(4, false);
    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    cout << graph.isBipartite();
    /*
    1------0----2
      \        /  |
       \      /
        \    /
           3       */
    Graph gra(4);
    gra.addEdge(0, 1);
    gra.addEdge(0, 2);
    gra.addEdge(1, 3);
    gra.addEdge(2, 3);
    cout << graph.isBipartite();
    /*
    0------1
    |      |
    |      |
    |      |
    2______3
    */
    Graph gr(5);
    gr.addEdge(0, 1);
    gr.addEdge(0, 2);
    gr.addEdge(1, 3);
    gr.addEdge(2, 3);
    gr.addEdge(0, 3);
    cout << gr.isBipartite();
}