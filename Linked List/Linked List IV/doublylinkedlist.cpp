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
class linkedlist
{
};
void display(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
    current = head;                  // reset current to head
    while (current->next != nullptr) // move current to the last node
    {
        current = current->next;
    }
    while (current != nullptr) // use nullptr instead of NULL
    {
        cout << current->val << " ";
        current = current->prev;
    }
}
int main()
{
    // 25 24 23 22 21
    node *a = new node(25);
    node *b = new node(24);
    node *c = new node(23);
    node *d = new node(22);
    node *e = new node(21);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    return 0;
}