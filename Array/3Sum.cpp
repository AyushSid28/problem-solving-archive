class Solution{
    public:
       vector<vector<int>> threeSum(vector<int>& nums){
        int n=nums.size();
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;j<n;j++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                    }
                }
            }
        }
        vector<vector<int>> result(st.begin(),st.end());
        return result;
       }
}



//Using 2 -pointers approach 

class Solution{
    public:
       vector<vector<int>> threeSum(vector<int>& nums){
          int n=nums.size();
          vector<vector<int>> ans;
          sort(nums.begin(),nums.end());
          for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                int left=i+1,right=n-1;
                which(left<right){
                    int sum=nums[i]+nums[j=left]+nums[right];
                    if(sum==0){
                        ans.push_back({nums[i],nums[left,nums[right]]});
                        left++,right--;

                    }
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
                }
            }
          }
          return ans;
       }
}