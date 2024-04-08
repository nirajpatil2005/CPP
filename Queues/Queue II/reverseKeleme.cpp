#include <iostream>
#include<queue>
#include<stack>
using namespace std;
void revk(queue<int>&q,int k)
{
    int count=0;
    stack<int>s;
    queue<int>copy;
    while(count!=k)
    {
        int x=q.front();
        q.pop();
        s.push(x);
        count++;
    }
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        copy.push(x);
    }
    while(!s.empty())
    {
        int x=s.top();
        s.pop();
        q.push(x);
    }
    while(!copy.empty())
    {
        int x=copy.front();
        copy.pop();
        q.push(x);
    }
      int n=q.size();
    for(int i=0;i<n;i++)
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }
}
int main()
{
    int k=4;
    queue<int>q;
    q.push(108);
    q.push(90);
    q.push(40);
    q.push(340);
    q.push(90);
    q.push(60);
    revk(q,k);
    return 0;
}