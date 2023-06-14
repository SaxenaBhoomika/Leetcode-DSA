class Solution {
public:
    int mind=INT_MAX;
    int val=-1;
    int getMinimumDifference(TreeNode* root) {
        if(root->left!=NULL){
            getMinimumDifference(root->left);

        }
        if(val>=0){
            mind=min(mind,root->val-val);
        }
        val=root->val;
        if(root->right!=NULL){
            getMinimumDifference(root->right);
        }
        return mind;
    }
};
