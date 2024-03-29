#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class deque
{
public:
    node *head;
    node *tail;
    int size;
    deque()
    {
        head = tail = NULL;
        size = 0;
    }
    void pushback(int val)
    {
        node *temp = new node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void pushfront(int val)
    {
        node *temp = new node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void popfront()
    {
        if (size == 0)
        {
            cout << "Queue is Empty!!";
            return;
        }
        else
        {
            head = head->next;
            if (head)
                head->prev = NULL;
            if (head == NULL)
                tail = NULL;
        }
        size--;
    }
    void popback()
    {
        if (size == 0)
        {
            cout << "Queue is empty!!";
            return;
        }
        else if (size == 1)
        {
            popfront();
            return;
        }
        node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    int getfront()
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
    int getback()
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
    int length()
    {
        return size;
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
        delete (current);
    }
};
int main()
{
    deque q;
    q.pushback(10);
    q.pushback(20);
    q.pushback(30);
    q.pushback(40);
    q.pushback(50);
    q.pushback(60);
    q.display();
    q.popback();
    q.popfront();
    q.display();
    cout<<q.length()<<endl;
    cout<<q.getback()<<"   "<<q.getfront()<<endl;
    q.pushfront(900);
    q.pushfront(800);
    q.display();
}