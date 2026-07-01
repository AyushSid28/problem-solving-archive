class Solution {
    public:
        int count=0;
        int ans;
        int kthSmallest(TreeNode* root, int k) {
            
            inorder(root,k);
            return ans;
            
        
        }
        void inorder(TreeNode* root,int k){
            if(root==NULL) return;
          
            inorder(root->left,k);
            count++;
            if(count==k){
                ans=root->val;
            }
            
    
            inorder(root->right,k);
           
            
        }
    };