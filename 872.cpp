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
    vector<int>out1;
    vector<int>out2;
    void inorder(TreeNode* root,vector<int> &out){
        if(root->left == NULL and root->right == NULL)
            out.push_back(root->val);
        if(root->left)
            inorder(root->left,out);
        if(root->right)
            inorder(root->right,out);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder(root1,out1);
        inorder(root2,out2);
        return out1 == out2;
        
    }
};
