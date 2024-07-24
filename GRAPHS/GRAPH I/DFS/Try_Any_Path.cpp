#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;
int v;

void add_edge(int src,int dest,bool bi_dir=true)
{
    graph[src].push_back(dest);
    if(bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<" -->";
        for(auto ele:graph[i])
        {
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}
bool dfs(int curr,int end)
{
    if(curr==end)return true;
    visited.insert(curr);//mark visited
    for(auto neighbour:graph[curr])
    {
        if(not visited.count(neighbour))
        {
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}

bool any_path(int src,int dest)
{
    return dfs(src,dest);

}
int main()
{
cin>>v;
graph.resize(v);
int e;
cin>>e;
visited.clear();
while(e--)
{
    int s,d;
    cin>>s>>d;
    add_edge(s,d);
}
int x,y;
cout<<"Enter points to check path:";
cin>>x>>y;
cout<<any_path(x,y)<<" \n";

}