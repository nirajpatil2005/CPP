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
void display(node* head)
{   node* temp=head;
    int n=0; 
       while (temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
        n++;
    }
    cout<<endl<<"size of list is: "<<n<<endl;
}
void revDisp(node* head)
{
    if(head==NULL) return;
    revDisp(head->next);
    cout<<head->val<<" ";
    }
int main()
{
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    node *temp = a;
    // while (temp != NULL)
    // {
    //     cout << temp->val <<" ";
    //     temp = temp->next;
    // }
    display(a);
    revDisp(a);
}