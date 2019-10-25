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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
       if(d==0 || d==1){
           TreeNode* t = new TreeNode(v);
           if(d == 1) 
               t->left = root;
           else 
               t->right = root;
           return t;
       }
       if(root != NULL and d > 1){
           root->left = addOneRow(root->left,v,d>2?d-1:1);
           root->right = addOneRow(root->right,v,d>2?d-1:0);
       }
       return root;
    }
};
