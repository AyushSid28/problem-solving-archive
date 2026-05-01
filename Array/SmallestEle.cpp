Find Smallest Element


int findSmallest(vector<int>& arr) {
    int minVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        minVal = min(minVal, arr[i]);
    }
    return minVal;
}