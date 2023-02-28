class Solution {
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int> freq;
        vector<TreeNode*>res;
        findDuplicates(root,freq,res);
        return res;
    }
private:
    string findDuplicates(TreeNode* node,unordered_map<string,int> &frequency, vector<TreeNode*> &res){
        if(!node){
            return "#";
        }
        string left=findDuplicates(node->left,frequency,res);
        string right=findDuplicates(node->right,frequency,res);
        string identifier=to_string(node->val)+","+left+","+right;
        frequency[identifier]++;

        if(frequency[identifier]==2){
            res.push_back(node);
        }

        return identifier;
    }
};
