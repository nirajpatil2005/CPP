#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>pq;
     pq.push(5);
     pq.push(10);
     pq.push(-1);
     pq.push(100);
     while(!pq.empty())
     {
        cout<<"top:"<<pq.top()<<endl;
        pq.pop();
     } 
}
  