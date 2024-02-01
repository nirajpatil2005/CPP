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
       this-> next = NULL;
    }
};
class linkedlist
{
public:
    node *head = NULL;
    int size = 0;
    linkedlist()
    {
        head = NULL;
        size = 0;
    }
    void delete_node(node* head,node* target)
    {
        node* temp=head;
        for(int i=0 ;i < target;i++)
        {
            temp=temp->next;
        }

    }
    void display(node* head)
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
    linkedlist ll;
    node *a = new node(13);
    node *b = new node(23);
    node *c = new node(33);
    node *d = new node(43);
    node *e = new node(53);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    ll.display(a);

    return 0;
}