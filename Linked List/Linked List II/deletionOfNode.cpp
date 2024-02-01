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
    void display(node* head)
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    node* deletenode(node* head,node* target)
    {
        if(head==target)
         {
            head=head->next;
         return head;
         }
         node* temp=head;
        while(temp->next!=target)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
int main()
{
    linkedlist ll;
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d= new node(50);
    node *e = new node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    node* head=a;
    ll.display(a);
    ll.deletenode(head,c);
    ll.display(a);



    return 0;
}