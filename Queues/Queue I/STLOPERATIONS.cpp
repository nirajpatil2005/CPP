#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> q)
{
    int a=q.back();
    while(!q.empty())
    {
        int x=q.front();
        cout<<q.front();
        q.pop();
        q.push(x);
    }

}

int main()
{
    queue<int> q;
    // push
    // pop
    // front-> top 
    //  size, empty
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front()<<" "<<q.back()<<" size:- "<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<" size:- "<<q.size();
    cout<<endl<<q.empty();
      q.pop();  q.pop();  q.pop();  q.pop();  q.pop();
    cout<<endl<<q.empty();
    
}