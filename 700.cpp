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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return NULL;
        if(root->val == val)
            return root;
        if(val < root->val)
            if( root->left == NULL)
                return NULL;
            else
                return searchBST(root->left,val);
        else if(val > root->val)
            if(root->right == NULL)
                return NULL;
            else
                return searchBST(root->right,val);
        
        return NULL;
    }
};
