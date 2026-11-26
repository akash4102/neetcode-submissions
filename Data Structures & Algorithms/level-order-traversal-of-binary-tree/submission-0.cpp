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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>res;
        if(root==nullptr)return res;
        q.push(root);
        while(!q.empty()){
            queue<TreeNode*>temp;
            vector<int>vecTemp;
            while(!q.empty()){
                TreeNode* t=q.front();
                q.pop();
                vecTemp.push_back(t->val);
                if(t->left!=nullptr)temp.push(t->left);
                if(t->right!=nullptr)temp.push(t->right);
            }
            q=temp;
            res.push_back(vecTemp);
        }
        return res;
    }
};
