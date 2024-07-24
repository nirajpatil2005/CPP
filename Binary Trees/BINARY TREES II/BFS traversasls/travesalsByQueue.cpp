#include<iostream>
#include<climits>
#include<queue>
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
void nthlevel(node* root,int curr,int level) // pre in post (pip)
{
    if(root==nullptr)return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
    
}
int levels(node* root)
{
    if(root==nullptr)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void levelOrder(node* root)
{
    int n=levels(root);
    for(int i=1;i<=n;i++)
    {
        nthlevel(root,1,i);
        cout<<endl;
    }
}
void levelOrderByQueue(node* root)
{
   queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=nullptr)q.push(temp->left);
        if(temp->right!=nullptr)q.push(temp->right);
    }
    cout<<endl;

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
    levelOrderByQueue(a);
}