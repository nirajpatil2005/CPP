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
        next = NULL;
        prev = NULL;
    }
};
class linked_list
{
public:
    node *head = NULL;
    node *tail = NULL;
    int size = 0;
    linked_list()
    {
        head = tail = NULL;
        size = 0;
    }
    void insert_at_end(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insert_at_beginnig(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insert_at_idx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "invalid idx!!";

        else if (idx == 0)
            insert_at_beginnig(val);
        else if (idx == size)
            insert_at_end(val);
        else
        {
            node *t = new node(val);
            node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Idx";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            if(idx<=size/2)
            {
            node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
            }
            else
            {
                node* temp=tail;
                for (int i = 1; i <=size-idx; i++)
            {
                temp = temp->prev;
            }
                return temp->val;
            }
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "LL is empty";
            return;
        }
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "ll is empty";
            return;
        }
        else if (size == 1)
        {
            deleteAtHead();
            return;
        }
        node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "list is empty";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "invalid idx";
            return;
        }
        else if (idx == 0)
        {
            return deleteAtHead();
        }
        else if (idx == size - 1)
        {
            return deleteAtTail();
        }
        else
        {
            node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev=temp;
        }
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    linked_list ll;
    ll.insert_at_end(10);
    ll.insert_at_end(12);
    ll.insert_at_end(15);
    ll.insert_at_end(19);
    ll.display();
    ll.insert_at_beginnig(20);
    ll.display();
    ll.insert_at_idx(1, 45);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.insert_at_end(50);
    ll.deleteAtIdx(2);
    ll.display();
      ll.insert_at_end(12);
    ll.insert_at_end(15);
    ll.insert_at_end(19);
     ll.display();
    cout<<ll.getAtIdx(5);
    return 0;
}