#include<iostream>
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
    node* head;
    int size=0;
    linkedlist()
    {
        head=NULL;
        size=0;
    } 
    void insertatbeggining(int val)
    {
        node* temp=new node(val);
        if(size==0)
        {
            head=temp;
        }
        else
        {
        temp->next=head;
        head=temp;
        }
        size++;
    }
    void insert_at_end(int val)
    {
        node* temp=new node(val);
        if(size==0)
        {
            head=temp;
        }
        else
        {
            node* current=head;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=temp;
            temp->next=NULL;
        }
        size++;
    }
    void insert_at_idx(int idx,int val)
    {
        node* temp=new node(val);
        node* current=head;
        if(size==0)
        {
            insertatbeggining(val);
        }
        else if(idx>size)
        {
            cout<<"you entered invalid index ";
        }
        else if(idx==size)
        {
            insert_at_end(val);
        }
        else
        {
            for(int i=1;i<idx;i++)
            {
                current=current->next;
            }
            temp->next=current->next;
            current->next=temp;
        }
        size++;
    }
    void deletenode(int idx)
    {
        node* current=head;
        if(idx==0) head=head->next;
        else if(size<idx)
        {
            cout<<"invalid index"<<endl;
        }
        else
        {
            for(int i=1;i<idx;i++)
            {
                current=current->next;
            }
            current->next=current->next->next;
        }
        size--;
    }
    void display()
    {
        node* current=head;
        while(current!=NULL)
        {
            cout<<current->val<<" ";
            current=current->next;
        }
        cout<<endl;
    }
};
int main()
{
    linkedlist ll;
    ll.insert_at_end(19);
    ll.insert_at_end(18);
    ll.insert_at_end(17);
    ll.insert_at_end(16);
    ll.insert_at_end(15);
    ll.display();
    ll.insertatbeggining(30);
    ll.display();
    ll.insert_at_idx(2,70);
    ll.display();
    ll.deletenode(0);
    ll.display();
}