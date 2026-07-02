class Solution {
    public:
        vector<int> finalPrices(vector<int>& prices) {
            int n=prices.size();
            vector<int> results=prices;
            stack<int> st;
            for(int i=0;i<n;i++){
                int curr=prices[i];
                while(!st.empty() && prices[st.top()]>=curr){
                    results[st.top()]=results[st.top()]-curr;
                    st.pop();
                    
                }
                st.push(i);
            }
            return results;
        }
    };