#include <iostream>
using namespace std;

class node {
public:
    int val;
    node *next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class linkedlist {
public:
    node *head;
    int size;

    linkedlist() {
        head = NULL;
        size = 0;
    }
};

void display(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* deletenode(node *head, node *target) {
    if (head == target) {
        node *newHead = head->next;
        delete head;  // Free the memory of the deleted node
        return newHead;
    }
    node *temp = head;
    while (temp->next != target) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete target;  // Free the memory of the deleted node
    return head;
}

int main() {
    linkedlist ll;
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node *e = new node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    node* head = a;

    cout << "Original List: ";
    display(head);

    // Deleting node 'a'
    head = deletenode(head, a);

    cout << "List after deletion: ";
    display(head);

    return 0;
}
