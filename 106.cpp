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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.size() == 0){
            return nullptr;
        }else if(postorder.size() == 1){
            return new TreeNode(inorder[0]);
        }
        int zhong = postorder[postorder.size() -1];
        int index = 0;
        while(inorder[index] != zhong)
            index++;
        TreeNode* head = new TreeNode(zhong);
        vector<int> inor1(inorder.begin(),inorder.begin() + index);
        vector<int> posor1(postorder.begin(),postorder.begin()+index);
        vector<int> inor2(inorder.begin()+index+1,inorder.end());
        vector<int> posor2(postorder.begin()+index,postorder.end() -1 );
        head->left = buildTree(inor1,posor1);
        head->right = buildTree(inor2,posor2);
        return head;
    }
};
