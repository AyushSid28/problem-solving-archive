//Count Subarray sum Equals K

// Examples
// Input : N = 4, array[] = {3, 1, 2, 4}, k = 6
// Output: 2
// Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

// Input: N = 3, array[] = {1,2,3}, k = 3
// Output: 2
// Explanation: The subarrays that sum up to 3 are [1, 2], and [3].

class Solution{
    public:
        int countSubarraySumEqualsk(vector<int>& nums,int k){
            int n=nums.size();
            int count=0;
            for(int i=0;i<n;i++){
                int sum=0;
                for(int i=0;i<n;i++){
                    for(int j=i;j<n;j++){
                        if(sum==k){
                            count++;
                        }
                    }
                }
            }
            return count;
}
}



class Solution{
    public:
      int countSubarraySumEqualsk(vector<int>& nums,int k){
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
               sum+=arr[j];
               if(sum==k){
                 count++;
               }
            }
        }
        return count;
      }
}