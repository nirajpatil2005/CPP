// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p==nullptr && q==nullptr)return true;
//         if(p==nullptr || q==nullptr)return false;
        
//         if(p->val !=q->val)return false;// its determine the last node values of these                          two                  nodes

//         bool leftans=isSameTree(p->left,q->left);
//         if(leftans==false)return false;

//         bool rightans=isSameTree(p->right,q->right);
//         if(rightans==false)return false;

//         return true;

//     }
// };