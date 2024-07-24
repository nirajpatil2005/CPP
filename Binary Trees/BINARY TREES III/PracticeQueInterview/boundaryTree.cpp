// constructed using bsf
#include <iostream>
#include <climits>
#include <queue>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        left = right = nullptr;
    }
};
int levels(node *root)
{
    if (root == nullptr)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void nthlevel(node *root, int curr, int level)
{
    if (root == nullptr)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    nthlevel(root->left, curr + 1, level);
    nthlevel(root->right, curr + 1, level);
}
void levelorder(node *root)
{
    int n = levels(root);
    if (root == nullptr)
        return;
    for (int i = 1; i < n; i++)
    {
        nthlevel(root, 1, i);
        cout << endl;
    }
}
node *construct(int arr[], int n)
{
    if (n == 0)
        return nullptr;
    queue<node *> q;
    node *root = new node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size() > 0 && i <= n)
    {
        node *temp = q.front();
        q.pop();
        node *l;
        node *r;
        if (arr[i] != INT_MIN)
            l = new node(arr[i]);
        else
            l = nullptr;
        if (j != n && arr[j] != INT_MIN)
            r = new node(arr[j]);
        else
            r = nullptr;
        temp->left = l;
        temp->right = r;
        if (l != nullptr)
            q.push(l);
        if (r != nullptr)
            q.push(r);
        i += 2;
        j += 2;
    }
    return root;
}
void leftboundary(node *root)
{
    if (root == nullptr)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    cout << root->val << " ";
    leftboundary(root->left);
    if (root->left == nullptr)
        leftboundary(root->right);
}
void bottomboundary(node* root)
{
    if(root==nullptr)return;
    if(root->left==nullptr && root->right==nullptr)cout<<root->val<<" ";
    bottomboundary(root->left);
    bottomboundary(root->right);
}
void rightboundary(node* root)
{
    if(root==nullptr)return;
    if(root->left==nullptr && root->right==nullptr)return;
    cout<<root->val<<" ";
    rightboundary(root->right);
    if(root->right==nullptr)rightboundary(root->left);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN,
                 9, 10, INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN,
                 14, 15, 16, INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN,
                 19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, INT_MIN, 24,
                 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN, INT_MIN,INT_MIN,
                 INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN,
                 INT_MIN,INT_MIN,INT_MIN,INT_MIN
                 };
    int n = sizeof(arr) / sizeof(arr[0]);
    node *root = construct(arr, n);
    // boundary traversal
    //  boundary(root);
    levelorder(root);
    cout << endl;
    cout<<"left boundary of tree: ";
    leftboundary(root);
    cout<<endl<<" bottom boundary of tree: ";
    bottomboundary(root);
    cout<<endl<<" right boundary of tree: ";
    rightboundary(root);
}
