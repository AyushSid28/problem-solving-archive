class Solution {
    public:
        int minDiff=INT_MAX;
        TreeNode* prev=NULL;
        int getMinimumDifference(TreeNode* root) {
            inorder(root);
            return minDiff;
    
        }
        void inorder(TreeNode* root){
            if(root==nullptr) return;
    
            inorder(root->left);
            if(prev!=nullptr) minDiff=min(minDiff,root->val-prev->val);
            prev=root;
            inorder(root->right);
        }
    };