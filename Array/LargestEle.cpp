//Given an array, we have to find the largest element in the array.

// Input:
//  arr[] = {2, 5, 1, 3, 0}  
// Output:
//  5  


class Solution{
    public:
        int sortArr(vector<int>& arr) {
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
}