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
        prev = NULL;
        next = NULL;
    }
};
class linkedlist
{
public:
    node *head;
    node *tail;
    int size;
    linkedlist()
    {
        head=tail = NULL;
        size = 0;
    }
};
void display(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout<<endl;
}
void recdisplay(node* head)
{ 
    if(head==NULL) return;
    cout<<head->val<<" ";
    recdisplay(head->next);
}
void revrecdisplay(node* head)
{
    if(head==NULL) return;
    revrecdisplay(head->next);
    cout<<head->val<<" ";
}
int main()
{
    linkedlist ll;
    node *a = new node(10);
    node *b = new node(12);
    node *c = new node(14);
    node *d = new node(16);
    node *e = new node(18);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    display(a);
    recdisplay(a);
    revrecdisplay(a);
    return 0;
}