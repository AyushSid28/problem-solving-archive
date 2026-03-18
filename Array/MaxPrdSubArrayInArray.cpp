class Solution{
    public:
      int maxPrductSubArrayInArray(vector<int>& nums){
        int n=nums.size();
     
        int maxi=0;
        
        for(int i=0;i<n;i++){
            int prd=1;
            for(int j=i;j<n;j++){
                prd*=nums[j];
                maxi=max(maxi,prd);
               
            }
        }
        return maxi;
      }
}