class Solution{
    public:
       int LongestSubarraywithZeroSum(vector<int>& nums){
        int n=nums.size();
        int maxi=0;
        for (int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=nums[j];
                if(sum==0){
                    int ans=j-i+1;
                    maxi=max(maxi,ans);

                }
            }
        }
        return maxi;
}
}