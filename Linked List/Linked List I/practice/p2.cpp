#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        next = NULL;
    }
};

class linkedlist {
public:
    node* head;
    int size;
    linkedlist() {
        head = NULL;
        size = 0;
    }

    void insert_at_end(int val) {
        node* temp = new node(val);
        if (head == NULL) {
            head = temp;
        } else {
            node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = temp;
        }
        size++;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linkedlist ll;
    ll.insert_at_end(12);
    ll.display();
    ll.insert_at_end(32);
    ll.insert_at_end(32);
    ll.insert_at_end(31);
    ll.display();

    return 0;
}
