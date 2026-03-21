//Problem Statement: Given a sorted array of n elements, possibly with duplicates, find the number of occurrences of the target element.


class Solution{
    public:
       int binarySearch(vector<int>& nums,int target){
        int n=nums.size();
        int left=0,int right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
}
}




//2nd approach

class Solution{
    public:
       int binarySearch(vector<int>& nums,int left,int right,int target){
         int n=nums.size();
         if(left>right){ return -1;}

         int mid=(left+right)/2;
         if(nums[mid]==target){
            return mid;
         }
         else if(nums[mid]<target){
            return binarySearch(nums,mid+1,right,target);
         }
         else{
            return binarySearch(nums,left,mid-1,target);
         }
}
}