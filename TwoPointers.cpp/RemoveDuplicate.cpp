// Example 1: Remove Duplicates from Sorted Array

// ### Problem:
// Sorted array mein duplicates in-place hatao. Unique elements ki count return karo. Extra space O(1).


// nums = [1, 1, 2, 2, 2, 3, 4, 4]
// Output: 4
class Solution {
    public:
     int removeDuplicates(vector<int>& nums) {
        int slow=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[fast]!=nums[slow]){
                 slow++;
                 nums[slow]=nums[fast];
        }
     }
     return slow+1;
    }
    }