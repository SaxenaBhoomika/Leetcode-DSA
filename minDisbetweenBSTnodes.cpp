/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>temp;
    void dfs(TreeNode* node){
        if(node==NULL){
            return ;
        }
        temp.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    int minDiffInBST(TreeNode* root) {
       dfs(root);
      
        sort(temp.begin(),temp.end());
        int res=INT_MAX;
        for(int i=0;i+1<temp.size();i++){
            if(temp[i+1]-temp[i]<res){
                res=temp[i+1]-temp[i];
            }
        }
        return res;
    }
};
