class Solution {
public:


    bool isSame(TreeNode* root1, TreeNode* root2){
        if(!root1 || !root2){
            return root1==root2;
        }
        if(root1->val==root2->val){
            return isSame(root1->left,root2->right) && isSame(root1->right,root2->left);
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left,root->right);
    }
};
