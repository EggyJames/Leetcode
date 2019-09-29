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
    struct node{
        TreeNode* ro;
        int de;
    };
    int maxLevelSum(TreeNode* root) {
        if(root ==  NULL)
            return 0;
        vector<int>out(90,0);
        int deep = 0;
        queue<node>tree;
        node a;
        a.ro = root;
        a.de = deep;
        node b;
        node c;
        tree.push(a);
        while(!tree.empty()){
            node b = tree.front();
            if(b.ro->left!=NULL){
                c.de = b.de+1;
                c.ro = b.ro->left;
                tree.push(c);
            }
            if(b.ro->right!=NULL){
                c.de = b.de+1;
                c.ro = b.ro->right;
                tree.push(c);
            }
            out[b.de]+=b.ro->val;
            tree.pop();
        }
        int max = 0;
        int index = 0;
        for(int i = 0;i<out.size();i++)
            if(max < out[i])
            {
                index = i+1;
                max = out[i];
            }
        return index;
    }
};
