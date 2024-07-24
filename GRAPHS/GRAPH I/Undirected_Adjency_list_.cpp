#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<list<int>> graph;
int v; // no of vertices

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (int el : graph[i])
        {
            cout << el << " , ";
        }
        cout << "\n";
    }
}

int main()
{
    cin >> v;
    graph.resize(v);
    int e;// no of edges
    cin >> e;
    while (e > 0)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
        e--;
    }
    display();
    return 0;
}
 