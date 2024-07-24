#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
vector<vector<int>> result;
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
        cout << i << " -->";
        for (auto ele : graph[i])
        {
            cout << ele << " , ";
        }
        cout << endl;
    }
}
void dfs(int curr, int end, vector<int> &path)
{
    path.push_back(curr);
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // mark visited
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void all_path(int src, int dest)
{
    vector<int> path;
    dfs(src, dest, path);
}
int main()
{
    cin >> v;
    graph.resize(v);
    int e;
    cin >> e;
    visited.clear();
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    int x, y;
    cout << "Enter points to check path:";
    cin >> x >> y;
    all_path(x, y);

    for (auto path : result)
    {
        for (auto el : path)
        {
            cout << el << " ";
        }
        cout << endl;
    }
}