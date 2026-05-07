// Maximum Sum of K Consecutive Elements

// ### Problem:
// Array mein K consecutive elements ka maximum sum nikalo.

// Example 1:
// Input: nums = [1, 2, 3, 4, 5], k = 3
// Output: 12
// Explanation: The sum of the subarray [2, 3, 4] is 9, which is the maximum sum of any 3 consecutive elements.

// Example 2:
// Input: nums = [1, 2, 3, 4, 5], k = 2
// Output: 9
// Explanation: The sum of the subarray [2, 3] is 5, which is the maximum sum of any 2 consecutive elements.


int maxSumSubarray(vector<int>& arr, int K) {
    int n = arr.size();
    
    int windowSum = 0;
    for (int i = 0; i < K; i++) {
        windowSum += arr[i];
    }
    
    int maxSum = windowSum;
    
    for (int i = K; i < n; i++) {
        windowSum += arr[i] - arr[i - K];
        maxSum = max(maxSum, windowSum);
    }
    
    return maxSum;
}