#include <iostream>
#include <queue>
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
    // q.pop();
    // display(q);
    // cout<<q.front()<<" "<<q.back()<<endl;
    // q.push(100);
    // display(q);
    revdisplay(q);q.push(100);
    cout<<endl;
    display(q);
    revdisplay(q);
}