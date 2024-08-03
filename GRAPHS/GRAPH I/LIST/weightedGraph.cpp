#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<pair<int, int>> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<pair<int, int>>[V];
    }
    void addEdge(int u, int v, int wt)
    {
        l[u].push_back({v, wt});
        l[v].push_back({u, wt});
    }
    void print()
    {

        for (int u = 0; u < V; u++)
        {
            cout << u << " : " << " ";
            list<pair<int, int>> neighbours = l[u];
            for (pair<int, int> ele : neighbours)
            {
                cout << "(" << ele.first << " ," << "" << ele.second << " )" << ",";
            }
            cout << endl
                 << "";
        }
    }
};

int main()
{
    Graph graph(5);
    graph.addEdge(0, 1, 100);
    graph.addEdge(1, 2, 101);
    graph.addEdge(1, 3, 103);
    graph.addEdge(2, 3, 104);
    graph.addEdge(2, 3, 104);
    graph.addEdge(3, 4, 106);
    graph.print();
}