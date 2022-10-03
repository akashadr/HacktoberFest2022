class Solution {
private:
    int findmin(TreeNode* root, int level){
        
        if(!root->left && !root->right)
            return level;
            
        int left = (root->left) ? findmin(root->left,level+1) : INT_MAX;
        int right = (root->right) ? findmin(root->right,level+1) : INT_MAX;

        return min(left,right);
    }
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return findmin(root,1);
    }
};
