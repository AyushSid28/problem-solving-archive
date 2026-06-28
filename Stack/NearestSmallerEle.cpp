class Solution {
    public:
      vector<int> prevSmaller(vector<int>& arr) {
          stack<int> st;
         
          int n=arr.size();
          vector<int> nse(n);
          for(int i=0;i<n;i++){
               while(!st.empty() && st.top()>=arr[i]){
                    st.pop();
                    
               }
               nse[i]=st.empty()? -1 : st.top();
               st.push(arr[i]);
          }
          return nse;
          
      }
  };