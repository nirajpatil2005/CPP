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
class linkedlist
{
public:
    node *head;
    int size = 0;
    linkedlist()
    {
        head = NULL;
        size = 0;
    }
    void insertatbeginning(int val)
    {
        node* tar=new node(val);
        if(size==0)
        {
            head=tar;
        }
        else
        {
            tar->next=head;
            head=tar;
        }
        size++;
    }
    void insertatend(int ele)
    {
        node *tar = new node(ele);
        if (head == NULL)
        {
            head = tar;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = tar;
            tar->next=NULL;
        }
        size++;
    }
    void insertatidx(int idx,int val)
    {
        node* tar=new node(val);
        node* temp=head;
        if(size==0)
        {
           insertatbeginning(val);
        }
        else if(size==idx)
        {
            insertatend(val);
        }
        else{
            for(int i=0;i<idx;i++)
            {
             temp=temp->next;   
            }
            //tar node ke next main temp next value store ki
            tar->next=temp->next;
            //baad main temp next ki val tar kar di......
            temp->next=tar;
        }
        size++;
    }
    void deleteatidx(int idx)
    {
        node* temp=head;
        if(idx==0)
        {
            head=head->next;
        }
        else if(idx>size || idx<size)
        {
            cout<<"invalid indexes";
        }
        else
        {
            for(int i=1;i<idx;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
        size--;
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
    linkedlist ll;
    node *a = new node(19);
    node *b = new node(18);
    node *c = new node(17);
    node *d = new node(16);
    node *e = new node(15);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    ll.head=a;
    ll.display();
    ll.insertatend(60);
    ll.display();
    ll.insertatbeginning(34);
    ll.display();
    ll.insertatidx(4,70);
    ll.display();
    ll.deleteatidx(3);
    ll.display();
    return 0;
}