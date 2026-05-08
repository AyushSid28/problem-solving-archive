// Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

// Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

 

// Example 1:

// Input: g = [1,2,3], s = [1,1]
// Output: 1


class Solution {
    public:
        int findContentChildren(vector<int>& g, vector<int>& s) {
    
          int l=0,r=0;
          sort(g.begin(),g.end());
          sort(s.begin(),s.end());
          while(l<g.size() && r<s.size()){
             if(s[r]>=g[l]){
                l++;
             }
             r++;
          }
          return l;
        }
    };