class Solution {
    public:
        vector<int> nextGreaterElements(vector<int>& nums) {
            stack<int> st;
            int N=nums.size();
            vector<int> nge(N);
            for(int i=2*N-1;i>=0;i--){
                while(!st.empty() && st.top()<=nums[i%N]){
                    st.pop();
                }
                if(i<N){
                  nge[i]=st.empty()? -1:st.top();
                }
                st.push(nums[i%N]);
    
            }
            return nge;
        }
    };