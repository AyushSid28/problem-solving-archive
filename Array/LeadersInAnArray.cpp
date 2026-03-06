//Leaders in an Array

// Example 1:
// Input:
//  arr = [4, 7, 1, 0]  
// Output:
//  7 1 0  

// Example 2:
// Input:
//  arr = [10, 22, 12, 3, 0, 6]  
// Output:
//  22 12 6  
// Explanation:


class Solution{
    public:
        vector<int> leadersInArray(vector<int>& nums){
            int n=nums.size();
            vector<int> ans;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    bool leader=true;
                    if(nums[j]>=nums[i]){
                        leader=false;
                        break;
                    }
                }
                if(leader){
                    ans.push_back(nums[i]);
                }
            }
            return ans;
        }
}



//Approach2


class Solution{
    public:
     vector<int> leadersInArray(vector<int>& nums){
        int n=nums.size();
        int max=nums[n-1];
        vector<int> ans;
        for(int i=n;i>=0;i--){
            if(nums[i]>=max){
                ans.push_back(nums[i]);
                max=nums[i];
            }
        }
        return ans;
}
}