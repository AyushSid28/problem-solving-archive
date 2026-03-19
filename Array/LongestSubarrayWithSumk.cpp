class Solution{
    public:
      int longestSubarrayWithSumk(vector<int>& nums,int k){
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=nums[j];
                if(sum==k){
                    maxi=max(maxi,j-i+1);
                }
                
            }
        }
        return maxi;
      }
}