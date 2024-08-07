#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    bool undir;

public:
    Graph(int V, bool undir = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->undir = undir;
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        if (undir)
        {
            l[v].push_back(u);
        }
    }
    void print()
    {
        for (int i = 0; i < V; i++)
        {
            list<int> neighbour = l[i];
            cout << i << ":";
            for (int ele : neighbour)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
    }
    void calcIndegree(vector<int> &indegree)
    {
        for (int i = 0; i < V; i++)
        {
            list<int> neighbours = l[i];
            for (int ele : neighbours)
            {
                indegree[ele]++;
            }
        }
    }
    void kahnAlgo()
    {
        vector<int> indeg(V, 0);
        calcIndegree(indeg);
        queue<int> q;

        for (int i = 0; i < V; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            list<int> neighbours = l[curr];
            for (int ele : neighbours)
            {
                indeg[ele]--;
                if (indeg[ele] == 0) // no pending dependencies
                {
                    q.push(ele);
                }
            }
        }

        cout << endl;
    }
};
int main()
{
    Graph graph(6, false);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);
    vector<int> vec(6, 0);
    graph.calcIndegree(vec);
    for (int ele : vec)
    {
        cout << ele << " ";
    }
    cout << endl
         << "Kahn's Algo:";
    graph.kahnAlgo();
}