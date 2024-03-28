#include <iostream>
#include <queue>
#include<stack>
using namespace std;
void display(queue<int> &q)
{

    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void revdisplay(queue<int> &q)
{

    if (q.size() == 0)
        return;
    int x = q.front();
    q.pop();
    revdisplay(q);
    cout << x << " ";
    q.push(x);
}
void revUsingStack(queue<int> &q)
{
    stack<int> st;
    int n1=q.size();
    for(int i=0;i<n1;i++)
    {
        int x=q.front();
        st.push(x);
        q.pop();
    }
     int n=q.size();
    for(int i=0;i<n1;i++)
    {
        int x=st.top();
        st.pop();
        q.push(x);
        cout<<x<<" ";
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    q.push(100);
    cout << endl;
    display(q);
    // revdisplay(q);cout<<endl;
    revUsingStack(q);
}