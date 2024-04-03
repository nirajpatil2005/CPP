#include <iostream>
using namespace std;
class Queue
{
public:
    int n = 6;
    int f=0, b = 0;//f->front b->back
    int arr[6];
    void push(int val)
    {
        if (b >= n)
        {
            cout << "queue is full";
            return ;
        }
        arr[b] = val;
        b++;
    }
    void pop()
    {
        if(b==0)
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
    Queue q;
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
    cout<<q.empty();
    return 0;
}