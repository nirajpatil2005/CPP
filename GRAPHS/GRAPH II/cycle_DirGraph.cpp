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
    bool dirCycleHelper(int src,vector<bool>&vis,vector<bool>&recpath)
    {
        vis[src]=true;
        recpath[src]=true;
        list<int>neighbours=l[src]; 
        for(int ele:neighbours)
        {
            if(!vis[ele])
            {
             if(dirCycleHelper(ele,vis,recpath))return true;  
            }
            else
            {
                if(recpath[ele])return true;
            }
        }
         recpath[src]=false; 
        return false;
    }
    bool iscycleDir()
    {
        vector<bool>vis(V,false);
        vector<bool>recursionpath(V,false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dirCycleHelper(i,vis,recursionpath))return true;
            }
        }
        return false;
    }
    
};
int main()
{
    // Graph graph(7,false);
    // graph.addEdge(0, 1);
    // graph.addEdge(0, 2);
    // graph.addEdge(1, 3);
    // graph.addEdge(2, 4);
    // // graph.addEdge(3, 4);
    // graph.addEdge(4,3);
    // graph.addEdge(3, 5);
    // // graph.addEdge(4, 5);
    //  graph.addEdge(5,4);
    // graph.addEdge(5, 3);
    // graph.addEdge(5, 6);
    // graph.print();
    Graph graph(4,false);
    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);
    cout <<graph.iscycleDir();
    // graph.BFS();
}