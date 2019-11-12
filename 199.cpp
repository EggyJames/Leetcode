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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>out;
        if(root == NULL)
            return out;
        queue<TreeNode*> temp;
        int size,i;
        temp.push(root);
        TreeNode* te;
        while(!temp.empty()){
            size = temp.size();
            i = 0;
            for(;i<size-1;i++){
                te = temp.front();
                if(te->left != NULL)
                    temp.push(te->left);
                if(te->right != NULL)
                    temp.push(te->right);
                temp.pop();
            }
            te = temp.front();
            if(te->left != NULL)
                temp.push(te->left);
            if(te->right != NULL)
                temp.push(te->right);
            temp.pop();
            out.push_back(te->val);
        }
        return out;
    }
};
