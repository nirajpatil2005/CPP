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
        next = NULL;
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
            head = temp;
        }
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
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
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
            node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
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
        size--;
    }
    void deleteAtTail()
    {
        if(size==0)
        {
            cout<<"ll is empty";
        }
        node* temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
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
    ll.display();
    ll.insert_at_end(20);
    cout << "inserted at end: ";
    ll.display();
    ll.insert_at_end(20);
    ll.insert_at_end(20);
    ll.insert_at_end(20);
    cout << "inserted at end: ";
    ll.display();
    ll.insert_at_beginnig(50);
    cout << "insert at beginnig: ";
    ll.display();
    ll.insert_at_idx(2, 90);
    cout << "inserted at 2nd idx: ";
    ll.display();
    ll.insert_at_idx(4, 60);
    cout << "inserted at 4th idx: ";
    ll.display();
    cout << "element on 2nd idx:" << ll.getAtIdx(2)<<endl;
    ll.deleteAtHead();
    cout<<"1st element is deleted: ";
    ll.display();
    ll.deleteAtTail();
    cout<<"element is deleted at last: ";ll.display();
    
    return 0;
}