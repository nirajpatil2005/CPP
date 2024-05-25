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
//     nthlevel(a,1,3);
//    cout<<endl<< levels(a)<<endl;
   for(int i=1;i<=levels(a);i++)
   {
    nthlevel(a,1,i);
    cout<<endl;
   }

}