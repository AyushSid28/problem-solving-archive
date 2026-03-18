//Longest Consecutive Sequence in an Array

// Examples
// Example 1:
// Input:
//  nums = [100, 4, 200, 1, 3, 2]  
// Output:
//  4  
// Explanation:
//  The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.

// Example 2:
// Input:
//  nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]  
// Output:
//  9  
// Explanation:
//  The longest sequence of consecutive elements in the array is [0, 1, 2, 3, 4, 5, 6, 7, 8], which has a length of 9.


class Solution{
    public:
      int longestConsecutiveSeqInArr(vector<int>& nums){
        int n=nums.size();
        int count=1;
        int maxi=0;
        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
               
                count++;
            }
            
            else{
                maxi=max(maxi,count);
                count=1;
            }
            maxi=max(maxi,count);
          
        }
        return maxi;
      }
}