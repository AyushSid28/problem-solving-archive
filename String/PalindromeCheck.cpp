// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.


class Solution {
    public:
        bool isPalindrome(string s) {
            int left=0;
            int right=s.size()-1;
            while(left<right){
                while(left<right && !isalnum(s[left])) left++;
                while(left<right && !isalnum(s[right])) right--;
                if (tolower(s[left])!=tolower(s[right])) return false;
                left++;
                right--;
            }
            return true;
        }
        
    };