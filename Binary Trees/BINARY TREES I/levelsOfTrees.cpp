#include <iostream>
#include <climits>
using namespace std;
class node // this is a tree node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void display(node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int levels(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
int main()
{

    node *a = new node(1); // root node
    node *b = new node(2); //
    node *c = new node(3); //
    node *d = new node(4); //
    node *e = new node(5);
    node *f = new node(6);
    node *g = new node(7);
    node *h = new node(15);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;
    node *root = a;
    display(a);
    cout << endl;
    cout << levels(a);
}