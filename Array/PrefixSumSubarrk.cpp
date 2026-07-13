class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int n=nums.size();
            int count=0;
            unordered_map<int,int> prefixCount;
            prefixCount[0]=1;
            int sum=0;
            for(int x:nums){
                sum+=x;
                if(prefixCount.count(sum-k)){
                    count+=prefixCount[sum-k];
    
                }
                prefixCount[sum]++;
            }
            return count;
    
        }
    };