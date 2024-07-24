#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int>>>graph;
int v;

void add_edge(int src,int wt,int dest,bool bi_dir=true)
{
    graph[src].push_back({dest,wt});
    if(bi_dir)
    {
        graph[dest].push_back({src,wt});
    }
}
void display()
{
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<" --> ";
        for(auto ele:graph[i])
        {
            cout<<"( "<<ele.first<<" "<< ele.second<<")" <<" , "; 
        }
        cout<<endl;
    }
}
int main()
{
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    while(e--)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,wt,d,true);
    }
    display();
}