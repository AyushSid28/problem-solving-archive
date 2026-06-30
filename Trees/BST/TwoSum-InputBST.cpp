class Solution {
    public:
        vector<int> nums;
        bool findTarget(TreeNode* root, int k) {
            Inorder(root);
            int i=0,j=nums.size()-1;
            while(i<j){
              int sum=nums[i]+nums[j];
              if(sum== k) return true;
              if(sum>k) j--;
              if(sum<k) i++;
    
           }
           return false;
           
    
    
        }
        void Inorder(TreeNode* root){
            if(root==NULL) return;
            Inorder(root->left);
            nums.push_back(root->val);
            Inorder(root->right);
        }
    };