// Sort an array of 0s, 1s and 2s


// Examples
// Input: nums = [1, 0, 2, 1, 0]
// Output: [0, 0, 1, 1, 2]
// Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

// Input: nums = [0, 0, 1, 1, 1]
// Output: [0, 0, 1, 1, 1]
// Explanation: The nums array in sorted order has 2 zeroes, 3 ones and zero twos.


class Solution{
    public:
        void SortColors(vector<int>& nums){
            int nums.size();
            int cnt0=0;
            int cnt1=0;
            int cnt2=0;
            for(int i=0;;i<n;i++){
                if(nums[i]==0){
                    cnt0++;
                }
                if(nums[i]==1){
                    cnt1++;
                }
                if(nums[i]==2){
                    cnt2++;
                }
            }
            for(int i=0;i<cnt0;i++){
                nums[i]=0;
            }
            for(int i=cnt0;i<cnt0+cnt1;i++){
                nums[i]=1;

            }
            for(int i=cnt0+cnt1;i<n;i++){
                nums[i]=2;
            }
        }
}