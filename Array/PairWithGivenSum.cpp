Find Pair with Given Sum


bool hasPairWithSum(vector<int>& arr, int sum) {
    unordered_set<int> seen;
    for (int x : arr) {
        if (seen.count(sum - x)) return true;
        seen.insert(x);
    }
    return false;
}