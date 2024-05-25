#include<iostream>
#include<climits>
using namespace std;
class node
{
    public:
    int val;
    node* left;
    node* right;
    node(int val)
    {
        this->val=val;
       left=nullptr;
        right=nullptr;
    }
};
void inorder(node* root) // pre in post (pip)
{
    if(root==nullptr)return;//base case
    inorder(root->left);//call  1
     cout<<root->val<<" ";//in ordrr
    inorder(root->right);//call 2
    // cout<<root->val<<" ";//post order
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
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    node *root = a;
    inorder(a);
 

}