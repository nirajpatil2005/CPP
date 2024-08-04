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
    void pathhelper(int src, int dest, vector<bool> &vis, string path)
    {
        if (src == dest)
        {
            cout << path << dest << endl;
            return;
        }
        vis[src] = true;
        path+=to_string(src);
        list<int> neighbours = l[src];
        for (int ele : neighbours)
        {
            if (!vis[ele])
            {
                pathhelper(ele, dest, vis, path);
            }
        }
        vis[src]=false;
        path.substr(0,path.size()-1);
    }
    void printallPath(int src,int dest)
    {
        vector<bool>vis(V,false);
        string path="";
        pathhelper(src,dest,vis,path);
    }
};
int main()
{
    Graph graph(6,false);
    graph.addEdge(0,3);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);
    graph.printallPath(5,1);
}