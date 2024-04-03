#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x);
    }
    cout << endl;
}
void removeEven(queue<int> q)
{   
    cout<<"after remove :";
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        if(i%2!=0) cout << x << " ";
        if(i%2!=0)q.push(x);
    }
    cout << endl;
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
    removeEven(q);
    q.push(100);
    display(q);
    q.push(15);
    q.push(18);
    q.push(19);
display(q);
removeEven(q);
    return 0;
}