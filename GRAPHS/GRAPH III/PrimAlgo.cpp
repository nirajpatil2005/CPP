#include <iostream>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<climits>
#include<algorithm>
using namespace std;
class Graph
{
    int V;
    bool undir;
    list<pair<int,int>>*l;//int ,in:neighbour+wt
    public:
    Graph(int V,bool undir=true)
    {
        this->V=V;
        this->undir=undir; 
        l=new list<pair<int,int>>[V];
    }
    void addEdge(int u,int v,int wt)
    {
        l[u].push_back(make_pair(v,wt));
        if(undir)l[v].push_back(make_pair(u,wt));
    }
    void primAlgo(int src)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        //(wt,v)->minHeap
        vector<bool>mst(V,false);
        pq.push(make_pair(0,src));
        int ans=0;
        while(!pq.empty())
        {
            int u=pq.top().second;
            int wt=pq.top().first;
            pq.pop();
            if(!mst[u])
            {
                mst[u]=true;
                ans+=wt;
                list<pair<int,int>>neighbours=l[u];
                for(pair<int,int> n:neighbours)
                {
                    int v=n.first;
                    int currWt=n.second;
                    pq.push(make_pair(currWt,v));
                }
            }
        }
        cout<<"Final cost of mst:"<<ans<<endl;
    }
};
int main()
{
    Graph graph(4);
    graph.addEdge(0,1,10);
    graph.addEdge(0,2,15);
    graph.addEdge(0,3,30);
    graph.addEdge(1,3,40);
    graph.addEdge(2,3,50 );
    graph.primAlgo(0);
    return 0; 
}