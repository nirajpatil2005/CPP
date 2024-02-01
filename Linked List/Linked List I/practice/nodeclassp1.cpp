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
    int size;
    linkedlist()
    {
        head = NULL;
        size = 0;
    }
    void insert_at_end(int val)
    {
        node *temp = new node(val);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = temp;
        }
        size++;
    }
    void insert_at_beginning(int val)
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
    void insert_at_idx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid index" << endl;
            return;
        }
        if (size == 0)
            insert_at_end(val);
        else if (size == idx)
            insert_at_end(val);
        else
        {
            node *temp = new node(val);
            node *current = head;
            for (int i = 1; i < idx; i++)
            {
                current = current->next;
            }
            temp->next = current->next;
            current->next = temp;

        }
        
            size++;
    }
        void get_at_idx(int idx)
        {
            if (idx < 0 || idx >= size)
            {
                cout << "Invalid Index";
            }
            if(idx==0)
            cout<<head->val;
            else
            {
                node *current = head;
                for (int i = 0; i < idx; i++)
                {
                    current = current->next;
                }
                cout << current->val;
            }
            cout<<endl;
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
        ll.insert_at_end(12);
        ll.insert_at_end(0);
        ll.display();
        ll.insert_at_end(32);
        ll.insert_at_end(38);
        ll.insert_at_end(31);
        ll.display();
        ll.insert_at_beginning(10);
        ll.display();
        ll.insert_at_idx(2, 56);
        ll.display();
        ll.get_at_idx(1);
        ll.insert_at_end(30);
        ll.display();
        ll.insert_at_beginning(40);
        ll.display();

        return 0;
    }