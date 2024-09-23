#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
     pq.push(10);
     pq.push(-1);
     pq.push(100);
     pq.push(4);
     pq.push(56);
      while(!pq.empty())
     {
        cout<<"top:"<<pq.top()<<endl;
        pq.pop();
     } 
} 