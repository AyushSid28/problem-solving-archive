//Check if two trees are identical
// Example 1:
// Input:Binary Tree 1: 1 2 3 -1 -1 4 5, Binary Tree 2: 1 2 3 -1 -1 4 5




class Solution {
    public:
        bool isSameTree(TreeNode* p, TreeNode* q) {
    
            if(p==NULL && q==NULL){
                return true;
            }
            if(p==NULL || q==NULL){
                return false;
            }
    
            return (p->val==q->val) && (isSameTree(p->left,q->left)) && (isSameTree(p->right,q->right));
        }
    };