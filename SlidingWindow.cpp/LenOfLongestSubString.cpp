// Problem Statement: Given a string, S. Find the length of the longest substring without repeating characters.

// Examples
// Example 1:
// Input:
//  S = "abcddabac"  
// Output:
//  4  
// Explanation:
//  The longest substring with distinct characters is "abcd", which has a length of 4.


class Solution{
    public:
       int lenOfLongestSubString(string S){
        int n=S.length();
        int maxi=0;
        
        for(int i=0;i<n;i++){
            unordered_set<char> st;
            int count=0;
            for(int j=i;j<n;j++){

               if(st.find(s[j])!=st.end()){
                   break;
                }
                st.insert(s[j]);
                count++;
            }
            maxi=max(maxi,count);
        }
 
        return maxi;

       }
}