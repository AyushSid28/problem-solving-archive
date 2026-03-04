// Find the Majority Element that occurs more than N/2 times


// Example 1:
// Input:
//  nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
// Output:
//  7  
// Explanation:
//  The number 7 appears 5 times in the 9-sized array, making it the most frequent element.

// Example 2:
// Input:
//  nums = [1, 1, 1, 2, 1, 2]  
// Output:
//  1  
// Explanation:
//  The number 1 appears 4 times in the 6-sized array, making it the most frequent element.


class Solution{
    public:
       int majorityElement(vector<int> & nums){
           int n=nums.size();
           for(int i=0;i<n;i++)
             int cnt=0;
             for(int j=i+1;j<n;j++){
                 if(nums[i]==nums[j]){
                    cnt++;
                 }
            }

            if(cnt>n/2){
                return nums[i];
            }
       }
}