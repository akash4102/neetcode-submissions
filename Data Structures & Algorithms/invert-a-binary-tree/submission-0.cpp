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
    TreeNode* invert(TreeNode* treeNode){
        if (treeNode == nullptr) return nullptr;

        TreeNode* leftNode = invert(treeNode->left);
        TreeNode* rightNode = invert(treeNode->right);

        treeNode->left = rightNode;
        treeNode->right = leftNode;

        return treeNode;
    }

    TreeNode* invertTree(TreeNode* root) {
        return invert(root);
    }
};
