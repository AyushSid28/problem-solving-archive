class Solution {
    public:
        int minDepth(TreeNode* root) {
            if(root==NULL) return 0;
            if(root->left==nullptr && root->right==nullptr) return 1;
    
            if(root->left==nullptr) return 1+minDepth(root->right);
            if(root->right==nullptr) return 1+minDepth(root->left);
    
            return 1+min(minDepth(root->right),minDepth(root->left));
        }
    };