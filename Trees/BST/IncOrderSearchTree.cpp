class Solution {
    public:
        TreeNode* curr;
        TreeNode* increasingBST(TreeNode* root) {
            TreeNode dummy(0);
            curr=&dummy;
            Inorder(root);
            return dummy.right;
        }
        void Inorder(TreeNode* root){
            if(root==NULL) return;
            Inorder(root->left);
            root->left=nullptr;
            curr->right=root;
            curr=root;
            Inorder(root->right);
        }
    };