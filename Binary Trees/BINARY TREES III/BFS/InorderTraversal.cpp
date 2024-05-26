  #include <iostream>
#include <stack>
#include <vector>
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

vector<int> InOrderTraversal(node *root)
{
   vector<int>ans;
   stack<node*>st;
   node* pt=root;//points to the present node of BT
   while(!st.empty() || pt!=nullptr)
   {
    if(pt){
        st.push(pt);
        pt=pt->left;
    }
    else{
        node* temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        pt=temp->right;
    }
   }
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
    vector<int> ans=InOrderTraversal(a);
    for(int ele:ans)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}