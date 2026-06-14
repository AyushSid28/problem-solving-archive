class Solution {
    int checkHeight(TreeNode* root) {
        if (!root) return 0;
        int l = checkHeight(root->left);
        if (l == -1) return -1;
        int r = checkHeight(root->right);
        if (r == -1) return -1;
        if (abs(l - r) > 1) return -1;
        return 1 + max(l, r);
    }
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};