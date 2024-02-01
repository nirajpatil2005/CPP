#include <iostream>
using namespace std;
class node
{
    public:
    int val;
    node* next;

    node(int val)
    {
        this->val=val;
        next=NULL;
     }
};
class linkedlist
{
    public:
    node* head=NULL;
    node* tail=NULL;
    int size=0;
    linkedlist()
    {
        head=tail=NULL;
        size=0;
        
    }
    void display(node* head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    linkedlist ll;
    node* a=new node(140);
    node* b=new node(1300);
    node* c=new node(101);
    node* d=new node(102);
    node* e=new node(130);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    ll.display(a);
    return 0;
}