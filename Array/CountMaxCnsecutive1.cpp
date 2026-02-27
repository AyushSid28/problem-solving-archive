// Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array..

// Examples
// Example 1:
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3
// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.


class Solution{
    public:
        int maxConsecutiveOnes(vector<int>&arr){
            int cnt=0;
            int maxi=0;
            int n=prices.size();
            for(int i=0;i<n;i++){
                if(arr[i]==1){
                    cnt++;
                }
                else{
                    cnt=0;
                }
                maxi=max(maxi,cnt);
            }
        }
}