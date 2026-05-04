Remove duplicate characters from string, keeping first occurrence only.


string removeDuplicates(string s) {
    bool seen[26] = {false};
    string result = "";
    for (char ch : s) {
        if (!seen[ch - 'a']) {
            seen[ch - 'a'] = true;
            result += ch;
        }
    }
    return result;
}