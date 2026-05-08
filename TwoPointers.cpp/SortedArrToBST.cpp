// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

 

// Example 1:


// Input: nums = [-10,-3,0,5,9]
// Output: [0,-3,9,-10,null,5]
// Explanation: [0,-10,5,null,-3,null,9] is also accepted:


class Solution {
    public:
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            return build(nums,0,nums.size()-1);
        }
        TreeNode* build(vector<int>& nums,int left,int right){
            if(left>right) return NULL;
            int mid=(left+right)/2;
            TreeNode* node=new TreeNode(nums[mid]);
            node->left=build(nums,left,mid-1);
            node->right=build(nums,mid+1,right);
            return node;
        }
    };