#include<iostream>
#include<stack>
#include<queue>
#include<unordered_set>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    vector<int>v;
    unordered_set<int> s;
    s.insert(10);
    s.insert(0);
     s.insert(40);
    s.insert(60);
    s.insert(40);s.insert(40);
    s.insert(30);
    cout<<s.size()<<endl;
    s.erase(10);
    for(int ele:s)
    {
        cout<<ele<<" ";
    }
    s.erase(10);

}