#include<iostream>
using namespace std;
class Node //linked list node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
//    cout<<a.val<<" "<<&a;
//    cout<<endl<<a.next;

   //forming linked list
   a.next=&b;
   b.next=&c;
   c.next=&d;
   d.next=NULL;
//    Node* ptr=&b;
//    cout<<(*ptr).val<<endl;
//    *ptr=60;
//    cout<<(*ptr).val;
    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->val<<endl;
    a.next->val=70;
    cout<<(*(a.next)).val<<endl;



}