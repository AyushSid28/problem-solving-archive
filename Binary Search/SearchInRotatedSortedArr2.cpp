//Search Element in Rotated Sorted Array II

// Examples
// Example 1:
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true
// Explanation: 0 is found in the array, so we return true.

// Example 2:
// Input: nums = [2,5,6,0,0,1,2], target = 3
// Output: false


class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int n=nums.size();
            bool ans;
            for(int i=0;i<n;i++){
                if(nums[i]==target){
                    return true;
                }
            }
            return false;
        }
    };


//2nd approach

class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int n=nums.size();
            int ans=-1;
            int low=0,high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    return true;
                    }
    
                if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                    low++;
                    high--;
                    continue;
                }
                if(nums[low]<=nums[mid]){
                    if(nums[low]<=target && target<=nums[mid]){
                            high=mid-1;
                        }
                        else{
                            low=mid+1;
                        }
                    }
                    else{
                        if(nums[mid]<target && target<=nums[high]){
                            low=mid+1;
                        }
                        else{
                            high=mid-1;
                        }
                    }
                }
                return false;
        }
    };
