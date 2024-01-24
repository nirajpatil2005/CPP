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
{   //10 20 30 40
    Node  a(10);
    Node b(20);
    Node c(30);
    Node d(40);
//    cout<<a.val<<" "<<&a;
//    cout<<endl<<a.next;

   //forming linked list
   a.next=&b;
   b.next=&c;
   c.next=&d;
  // d.next=NULL;
    //print karani hain c ki value
    // cout<<a.val<<endl;
    // cout<<a.next->val<<endl;
    // cout<<((a.next)->next)->val<<endl;
    // cout<<(((a.next)->next)->next)->val;
    Node temp=a;
    while(1)
    {
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }


} 