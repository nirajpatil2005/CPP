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
class stack
{
public:
    node *head;
    int size;
    stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "stack is empty";
            return;
        }
        head = head->next;
        size--;
    }
    int top()
    {
        if(head==NULL)
        {
            cout<<"stack is empty!!";
            return -1;
        }
        return head->val;
    }
    void print(node* temp)
    {
        if(temp==NULL)return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display()
    {
        node *temp=head;
       print(temp);
       cout<<endl;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(12);
    st.push(14);
    st.push(16);
    st.push(18);
    cout<<st.top()<<endl;
    st.display();
    st.pop();
    st.display();
   
    return 0;
}