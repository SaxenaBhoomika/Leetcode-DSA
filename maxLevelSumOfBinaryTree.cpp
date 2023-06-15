class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int res=-1;
        int l=0;
        int sum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            l++;
            int n=q.size();
            int temp=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                temp+=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                
            }
            if(temp>sum){
                res=l;
                sum=temp;
            }
            
        }
        return res;
    }
};
