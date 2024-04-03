#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};
class Queue
{
public:
    node *head;
    node *tail;
    int size;
    Queue()
    {
        head = tail = NULL;
        size = 0;
    }
    void push(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            node* temp=head;
            head = head->next;
            delete(temp);
        }
        size--;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return head->val;
        }
    }
    int back()
    {
        if (size - 1 == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return tail->val;
        }
    }
    void display()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
        delete(current);
    }
    int length()
    {
        return size;
    }
    bool empty()
    {
        if(size==0)return true;
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
    q.push(60);
    q.display();
    q.pop();
    q.pop();
    q.display();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.display();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
     q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    cout<<q.front()<<" "<<q.back();
    cout<<" "<<q.length()<<" "<<q.empty();
    return 0;
}