//Count inversions in an array

// Example 1:
// Input Format: N = 5, array[] = {1,2,3,4,5}
// Result: 0
// Explanation: we have a sorted array and the sorted array has 0 inversions as for i < j you will never find a pair such that A[j] < A[i]. More clear example: 2 has index 1 and 5 has index 4 now 1 < 5 but 2 < 5 so this is not an inversion.


class Solution{
    public:
        int countInversionInArray(vector<int>& nums){
            int n=nums.size();
            int count=0;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[j]>nums[i]){
                        count++;
                    }
                }
            }
            return count;
        }
}