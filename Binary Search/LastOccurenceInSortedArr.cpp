

// Problem Statement: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1. Note: Consider 0 based indexing

// Examples
// Example 1:
// Input:
//  N = 7, target = 13, array[] = {3, 4, 13, 13, 13, 20, 40}  
// Output:
//  4  
// Explanation:
//  The target value 13 appears for the first time at index number 2 in the array.  


class Solution{
   public:
     int lastOccurenceInSortedArr(vector<int>& nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

}
}


//2nd approach

class Solution{
    public:
     int lastOccurenceInSortedArr(vector<int>& nums,int target){
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans=i;
            }
        }
        return ans;
}
};