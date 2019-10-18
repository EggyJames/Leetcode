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
    int res=0;
    int max = INT_MIN;
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
        return res;
    }
    void dfs(TreeNode* node,int deep){
        if(node == NULL)
            return;
        if(deep > max)
        {
            max = deep;
            res = node->val;
        }
        dfs(node->left,deep+1);
        dfs(node->right,deep+1);
    }
};
