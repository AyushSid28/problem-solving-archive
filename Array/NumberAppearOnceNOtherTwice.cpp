//Find the number that appears once, and the other numbers twice

// Examples
// Example 1:
// Input Format: arr[] = {2,2,1}
// Result: 1
// Explanation: In this array, only the element 1 appear once and so it is the answer.


// Example 2:
// Input Format: arr[] = {4,1,2,1,2}
// Result: 4
// Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

class Solution {
    public:
       
        int getSingleElement(vector<int>& arr) {
            int n = arr.size();
    
            
            for (int i = 0; i < n; i++) {
                int num = arr[i];
                int cnt = 0;
    
               
                for (int j = 0; j < n; j++) {
                    if (arr[j] == num)
                        cnt++;
                }
    
              
                if (cnt == 1) return num;
            }
    
           
            return -1;
        }
    };
    