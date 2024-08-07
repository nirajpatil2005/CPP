#include <iostream>
#include<vector>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;
 class Edge
 {
    public:
    int v;
    int wt;
    Edge(int v,int wt)
    {
        this->v=v;
        this->wt=wt;
    }
 };
void Bellmanford(vector<vector<Edge>>graph,int V,int src)
{
    vector<int>dist(V,INT_MAX);
    dist[src]=0;

    for(int i=0;i<V-1;i++)
    {
        for(int u=0;u<V;u++)
        {
            for(Edge e:graph[u])
            {
                if(dist[e.v]>dist[u]+e.wt)
                {
                    dist[e.v]=dist[u]+e.wt;
                }
            }
        }
    }
    for(int i=0;i<V;i++)
    {
         cout<<dist[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int V=5;
    vector<vector<Edge>>graph(V);
    graph[0].push_back(Edge(1,2));
    graph[0].push_back(Edge(2,4));
    graph[1].push_back(Edge(2,-4));
    graph[2].push_back(Edge(3,2));
    graph[3].push_back(Edge(4,4));
    graph[4].push_back(Edge(1,-1));
    Bellmanford(graph,V,4);
    return 0;
}