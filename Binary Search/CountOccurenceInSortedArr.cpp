// Count Occurrences in Sorted Array


// 11

// Problem Statement: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.

// Examples
// Example 1:
// Input:
//  N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
// Output
// : 4
// Explanation:
//  3 is occurring 4 times in 
// the given array so it is our answer.


class Solution{
    public:
       int countOccurenceInSortedArr(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]==target){
                first=mid;
                high=mid-1;

            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return first;

}
};




//2nd Approach

class Solution{
    public:

     int countOccurenceInSortedArr(vector<int>& nums,int target){
       int n=nums.size();
       int count=0;
       for(int i=0;i<n;i++){
        if(nums[i]==target){
            count++;
        }
       }
       return count;
    }
};