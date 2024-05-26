#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class node{
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
void levelOrderByQueue(node* root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
    cout<<endl;
}
node* construct(int arr[],int n)
{
    queue<node*>q;
    node* root=new node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<=n)
    {
        node* temp=q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN) l=new node(arr[i]);
        else l=nullptr;
        if(j!=n && arr[j]!=INT_MIN)r=new node(arr[j]);
        else r=nullptr;
        temp->left=l;
        temp->right=r;
        if(l!=nullptr)q.push(l);
        if(r!=nullptr)q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}

int main()
{
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    node* root=construct(arr,n);
    levelOrderByQueue(root);
}