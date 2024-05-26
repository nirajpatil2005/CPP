#include <iostream>
#include <stack>
#include <vector>
#include<algorithm>
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
        right=nullptr;
        left=nullptr;
    }
};

vector<int>postOrderTraversal(node* root)
{
    vector<int> ans;
    stack<node*>st;
    if(root!=nullptr)st.push(root);
    while(!st.empty()){
        node* temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left)st.push(temp->left);
        if(temp->right)st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    // int i=0;
    // int j=ans.size()-1;
    // while(i<=j)
    // {
    //     int temp=ans[i];
    //     ans[i]=ans[j];
    //     ans[j]=temp;
    //     i++;
    //     j--;
    // }
    return ans;
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
    node *h = new node(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;
    vector<int> ans=postOrderTraversal(a);
    for(int ele:ans)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}