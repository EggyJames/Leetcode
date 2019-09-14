/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> res;
        stack<TreeNode*> path;
        while(root){
            path.push(root);
            root = root->left;
        }
        while(!path.empty()){
            auto node = path.top();
            path.pop();
            res.push_back(node->val);
            node = node->right;
            while(node){
                path.push(node);
                node = node->left;
            }
        }
        return res;
    }
};
