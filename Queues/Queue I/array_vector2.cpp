#include <iostream>
#include<vector>
using namespace std;
class Queue
{
public:
    int f,b;//f->front b->back
    vector<int>arr;
    Queue(int val)
    {
       f=0;
       b=0; 
       vector<int>v(val);
       arr=v;
    }
    void push(int val)
    {
        if (b-1 == arr.size())
        {
            cout << "queue is full";
            return ;
        }
        arr[b] = val;
        b++;
    }
    void pop()
    {
        if(b-f==0)
        {
            cout<<"Queue is empty";
            return;
        }
        f++;
    }
    void display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
    int size()
    {
        return b-f;
    }
    int front()
    {
        if(size()==0) return -1;
        return arr[f];
    }
    int back()
    {
        if(size()==0)return -1;
        return arr[b-1];
    }
    bool empty()
    {
        if(size()==0)return true;
        else return false;
    }
};
int main()
{
    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
    q.push(199);
    q.display();
    q.push(100);
    q.display();
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    q.push(100);cout<<"  ";
    q.display();
    return 0;
}