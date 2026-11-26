/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->left == nullptr && root->right==nullptr ){
            if(root==p || root==q)return root;
            return nullptr;
        }
        if(root==p || root==q)return root;
        TreeNode* left =nullptr;
        if(root->left!=nullptr){
            left=lowestCommonAncestor(root->left,p, q);
        }
        TreeNode* right = nullptr;
        if(root->right!=nullptr){
            right=lowestCommonAncestor(root->right,  p,  q);
        }
        if((left==p && right==q )||(left==q && right==p ) )return root;
        if(left!=nullptr)return left;
        if(right!=nullptr)return right;
        return nullptr;
    }
};
