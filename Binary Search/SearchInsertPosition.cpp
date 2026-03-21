//Problem Statement: Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1


class Solution{
    public:
       int searchInsertPosition(vector<int>& nums,int target){
          int n=nums.size();
          int left=0,int right=n-1,int ans=n;
          while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]>=target){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
          }
          return ans;
       }
       }