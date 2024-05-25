#include <iostream>
#include<climits>
using namespace std;
class node
{ // this is a tree node
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        left = NULL;
        right = NULL;
        this->val = val;
    }
};
class tree
{
public:
void display(node *root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int size(node* root)
{
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int sum(node* root)
{
    if(root==nullptr)return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int minval(node* root)
{
    if(root==nullptr)return INT_MAX;
    return min(root->val,min(minval(root->left),minval(root->right)));
}
int maxval(node* root)
{
    if(root==NULL)return INT_MIN;
    return max(root->val,max(maxval(root->left),maxval(root->right)));
}
int product(node* root)
{
   if(root==nullptr)return 1;
   return root->val*product(root->left)*product(root->right); 
}
int levels( node* root)
{
    if(root==nullptr)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
} ;

int main()
{
    tree bst;
    node *a = new node(1);
    node *b = new node(2);
    node *c = new node(3);
    node *d = new node(4);
    node *e = new node(5);
    node *f = new node(6);
    node *g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    bst.display(a);
    cout<<endl<<"Size:"<<bst.size(a);
    cout<<endl<<"SUM:"<<bst.sum(a);
    cout<<endl<<"MIN:"<<bst.minval(a);
    cout<<endl<<"MAX:"<<bst.maxval(a);
     cout<<endl<<"Product:"<<bst.product(a);
     cout<<endl<<"Levels:"<<bst.levels(a);
}
