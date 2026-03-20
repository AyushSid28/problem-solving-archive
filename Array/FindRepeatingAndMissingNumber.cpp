//Problem Statement: Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
//Return the values A and B, as an array of size 2, where A appears in the 0-th index and B in the 1st index.

// Example 1:
// Input:
//  nums = [3, 5, 4, 1, 1]  
// Output:
//  [1, 2]  
// Explanation:
//  1 appears twice in the array, and 2 is missing from the array. So the output is [1, 2].




class Solution{
    public:
     vector<int> findRepeatingAndMissingNumber(vector<int>& nums){
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    ans.push_back(nums[i]);
                }
                
               
            }
        }
        return ans;
     }

}