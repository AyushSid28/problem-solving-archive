//Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

// Example 1:
// Input:
//  nums = [1, 2, 1, 1, 3, 2]  
// Output:
//  [1]  
// Explanation:
//  Here, n / 3 = 6 / 3 = 2.  
// Therefore, the elements appearing 3 or more times are: [1].

// Example 2:
// Input:
//  nums = [1, 2, 1, 1, 3, 2, 2]  
// Output:
//  [1, 2]  
// Explanation:
//  Here, n / 3 = 7 / 3 = 2.  
// Therefore, the elements appearing 3 or more times are: [1, 2].



class Solution{
    public:
       vector<int> majorityElement(vector<int>& nums){
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>n/3){
                ans.push_back(nums[i]);
            }

            if(ans.size()==2){
                break;
            }
        }
        return ans;
       }
}