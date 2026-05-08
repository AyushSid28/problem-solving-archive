// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

class Solution {
    public:
        string reverseVowels(string s) {
            int l=0,r=s.size()-1;
            string vowels="aeiouAEIOU";
            while(l<r){
                while(l<r && vowels.find(s[l])==string::npos) l++;
                while(l<r && vowels.find(s[r])==string::npos) r--;
                swap(s[l],s[r]);
                l++;
                r--;
            }
            return s;
    
        }
    };