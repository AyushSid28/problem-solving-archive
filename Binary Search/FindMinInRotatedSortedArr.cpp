// Problem Statement:
// Given an integer array arr of size N, sorted in ascending order (with distinct values), the array is rotated at any index which is unknown. Find the minimum element in the array.


// Input: arr = [4,5,6,7,0,1,2,3]
// Output: 0
// Explanation: The minimum element in the array is 0.
// Input : arr = [3,4,5,1,2]
// Output: 1
// Explanation : The minimum element in the array is 1.


class Solution {
    public:
        int findMin(vector<int>& nums) {
            int mini=INT_MAX;
            int n=nums.size();
            for(int i=0;i<n;i++){
                mini=min(mini,nums[i]);
            }
            return mini;
        }
    };


//2nd Approach
class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n=nums.size();
        
            int low=0,high=n-1;
            while (low < high) {
    
           
            int mid = low + (high - low) / 2;
    
           
            if (nums[mid] > nums[high]) {
    
               
                low = mid + 1;
    
            } else {
    
                
                high = mid;
            }
        }
    
       
        return nums[low];
        }
    };