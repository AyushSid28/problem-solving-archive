
// Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

// Examples
// Input : arr[] = {1,1,2,2,3,3,4,5,5,6,6}
// Output: 4
// Explanation: Only the number 4 appears once in the array.

// Input: arr[] = {1,1,3,5,5}
// Output : 3
// Explanation: Only the number 3 appears once in the array.

class Solution{
    public:
      int searchSingleEleInSortedArray(vector<int>& nums){
        int n=nums.size();
        if(n==1) return arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
            else if(arri==n-1){
                if(arr[i]!=arr[i-1]){
                    return arr[i];
                }
            }
            else{
                if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                    return arr[i];
                }
            }
        }
        return -1;
}
}



//2nd Approach

class Solution{
    public:
     int searchSingleEleInSortedArray(vector<int>& nums){
       int n=nums.size();
       int ans=0;
       for(int i=0;i<n;i++){
         ans=ans^nums[i];
     }
       return ans;
    }
}

//3rd approach

class Solution{
    public:
      int searchSingleEleInSortedArray(vector<int>& nums){
        int n=nums.size();
       
        if(n==1) return nums[0];
        if(nums[0]!nums[1]){
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        int left=1,right=n-2;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0 && nums[mid]==nums[mid-1])|| (mid%2==1 && nums[mid]==nums[mid+1]){
                left=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return -1;
      }
}