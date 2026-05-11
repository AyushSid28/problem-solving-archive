// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

 

// Example 1:

// Input: a = "abcd", b = "cdabcdab"
// Output: 3
// Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.


class Solution {
    public:
        int repeatedStringMatch(string a, string b) {
            string repeat=a;
            int count=1;
            while(repeat.size()<b.size()){
                repeat+=a;
                count++;
            }
            if(repeat.find(b)!=string::npos) return count;
                repeat+=a;
                count++;
            
            if(repeat.find(b)!=string::npos){
                return count;
            }
            return -1;
        }
    };