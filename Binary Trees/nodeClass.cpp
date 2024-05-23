#include <iostream>
#include<climits>
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
int sum(node *root)
{
    if (root == NULL)
        return 0;
    // int leftsum=sum(root->left);
    // int rightsum=sum(root->right);
    // int ans=root->val+leftsum+rightsum;
    return root->val + sum(root->left) + sum(root->right);
}
int maxval(node *root)
{
    if (root == NULL) return  INT_MIN;
    return max(root->val,max(maxval(root->left),maxval(root->right)));
}
int size(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + size(root->left) + size(root->right);
}
int product(node* root)
{
    if(root==NULL)return 1;
    return root->val*product(root->left)*product(root->right);
}
int minval(node* root)
{
    if(root==NULL)return INT_MAX;
    return min(root->val,min(minval(root->left),minval(root->right)));
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
    display(a);
    cout<<endl<<"SUM:"<< sum(a)<<endl;
    cout<<"Size:"<< size(a) << endl;
    cout<<"max val of trees node:"<<maxval(a)<<endl;
    cout<<"Product of nodes:"<<product(a)<<endl;
    cout<<"min val of trees node:"<<minval(a)<<endl;
    
    }