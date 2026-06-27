class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int> nge;
            stack<int> st;
            int n=nums2.size();
            for(int i=n-1;i>=0;i--){
                  int curr=nums2[i];
                  while(!st.empty() && st.top()<=curr){
                     st.pop();
                  }
                  if(st.empty()) nge[curr]=-1;
                  else nge[curr]=st.top();
    
                  st.push(curr);
    
            }
            vector<int> ans;
            for(int x:nums1){
                ans.push_back(nge[x]);
            }
            return ans;
        }
    };