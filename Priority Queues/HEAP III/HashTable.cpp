#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;

class node
{
public:
    string key;
    int val;
    node *next;
    node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = nullptr;
    }
    ~node()
    {
        if (next != nullptr)
        {
            delete next;
        }
    }
};

class hashtable
{
    int totsize;
    int currsize; // rehashing
    node **table;

    int hashfun(string key)
    {
        int idx = 0;
        for (int i = 0; i < key.size(); i++)
        {
            idx += (key[i] * key[i]) % totsize;
        }
        return idx % totsize; // Ensure the index is within table bounds
    }

public:
    hashtable(int size = 5)
    {
        totsize = size;
        currsize = 0;
        table = new node *[totsize];
        for (int i = 0; i < totsize; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, int val)
    {
        int idx = hashfun(key);

        node *newnode = new node(key, val);
        newnode->next = table[idx];
        table[idx] = newnode;
        currsize++;

        double lambda = currsize / (double)totsize;
        if (lambda > 1)
        {
            rehash();
        }
    }

    void rehash()
    {
        node **oldtable = table;
        int oldsize = totsize;
        totsize = 2 * totsize;
        table = new node *[totsize];

        for (int i = 0; i < totsize; i++)
        {
            table[i] = nullptr;
        }

        int tempCurrSize = currsize; // Store current size temporarily
        currsize = 0;                // Reset currsize during rehashing

        for (int i = 0; i < oldsize; i++)
        {
            node *temp = oldtable[i];
            while (temp != nullptr)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if (oldtable[i] != nullptr)
            {
                delete oldtable[i];
            }
        }
        delete[] oldtable;

        currsize = tempCurrSize; // Restore the size after rehashing
    }

    bool exists(string key)
    {
        int idx = hashfun(key);
        node *temp = table[idx];
        while (temp != nullptr)
        {
            if (temp->key == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key)
    {
        int idx = hashfun(key);
        node *temp = table[idx];
        while (temp != nullptr)
        {
            if (temp->key == key)
            {
                return temp->val; // Return the value if the key is found
            }
            temp = temp->next;
        }
        return -1; // Return -1 if key is not found
    }
    void print()
    {
        for(int i=0;i<totsize;i++)
        {
            cout<<"idx"<<i<<"->";
            node* temp=table[i];
            while(temp!=nullptr)
            {
                cout<<"("<<temp->key<<","<<temp->val<<")->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
    void remove(string key)
{
    int idx = hashfun(key);
    node* temp = table[idx];
    node* prev = nullptr;

    // Traverse the linked list at the hashed index
    while (temp != nullptr)
    {
        if (temp->key == key)
        {
            // If the node to remove is the head node
            if (prev == nullptr)
            {
                table[idx] = temp->next;  // Update the head to the next node
            }
            else
            {
                prev->next = temp->next;  // Skip over the node to remove
            }

            // Free memory of the node
            temp->next = nullptr;  // Ensure no dangling pointer before deletion
            delete temp;
            currsize--;  // Decrement the size
            return;  // Node removed, exit the function
        }

        // Move to the next node
        prev = temp;
        temp = temp->next;
    }
}

    ~hashtable()
    {
        for (int i = 0; i < totsize; i++)
        {
            if (table[i] != nullptr)
            {
                delete table[i]; // This will invoke the node destructor and delete all linked nodes
            }
        }
        delete[] table; // Delete the table array itself
    }
};

int main()
{
    hashtable ht;
    ht.insert("India", 150);
    ht.insert("China", 150);
    ht.insert("Israel", 50);
    ht.insert("US", 100);
    ht.insert("Nepal", 80);
    ht.print();cout<<endl;
    ht.remove("US");
    ht.print();
    // if (ht.exists("India"))
    // {
    //     cout << "India population: " << ht.search("India") << endl;
    // }

    // if (ht.exists("US"))
    // {
    //     cout << "US population: " << ht.search("US") << endl;
    // }

    return 0;
}
