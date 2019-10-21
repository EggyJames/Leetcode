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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>out;
        queue<TreeNode*>tem;
        if(root == NULL)
            return out;
        tem.push(root);
        int size;
        while(!tem.empty()){
            size = tem.size();
            double sum = 0;
            for(int i = 0;i<size;i++){
                TreeNode* node = tem.front();
                sum+=node->val;
                if(node->left != NULL)
                    tem.push(node->left);
                if(node->right != NULL)
                    tem.push(node->right);
                tem.pop();
            }
            out.push_back((double)sum/size);
        }
        return out;
    }
};
