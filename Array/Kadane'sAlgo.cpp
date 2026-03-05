//Kadane's Algorithm : Maximum Subarray Sum in an Array

// Example 1:
// Input:
//  nums = [2, 3, 5, -2, 7, -4]  
// Output:
//  15  
// Explanation:
//  The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous subarray.

// Example 2:
// Input:
//  nums = [-2, -3, -7, -2, -10, -4]  
// Output:
//  -2  
// Explanation:
//  The largest sum is -2, which comes from taking the element at index 0 or index 3 as the subarray. Since all numbers are negative, the subarray with the least negative number gives the largest sum.



class Solution{
    public:
      int maxSubArray(vector<int>& nums){
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum=sum+nums[k];
                }          
                maxi=max(maxi,sum); 
             }
        }
        return maxi;
      }
}