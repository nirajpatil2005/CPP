#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
    }

};
int main()
{
    //10 20 30 40 
    Node a;
    a.val=10;
    Node b;
    b.val=20;
    Node c;
    c.val=30;
    Node d;
    d.val=40;
    cout<<a.next;
    //forming linked list
    // a.next=&b;
    // b.next=&c;
    // c.next=&d;
    // d.next=NULL;


}