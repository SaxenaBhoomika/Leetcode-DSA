class Solution {
  private:
    inline int backtrack(Node* node) {
        if (!node) {
            return 0;
        }
        int ret_val = node -> data;
        node -> data = backtrack(node->left) + backtrack(node->right);
        return ret_val + node->data;
    }
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        backtrack(node);
    }
};
