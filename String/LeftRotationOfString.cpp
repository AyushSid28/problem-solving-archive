// Given a string s and an integer d, the task is to left rotate the string by d positions.

// Examples:

// Input: s = "GeeksforGeeks", d = 2
// Output: "eksforGeeksGe"  
// Explanation: After the first rotation, string s becomes "eeksforGeeksG" and after the second rotation, it becomes "eksforGeeksGe".

// Input: s = "qwertyu", d = 2 
// Output: "ertyuqw" 
// Explanation: After the first rotation, string s becomes "wertyuq" and after the second rotation, it becomes "ertyuqw".

class Solution{
    public:
     string leftRotate(string s,int d){
        int n=s.size();
        d=d%n;
        return substr(d)+substr(0,d);

     }
}