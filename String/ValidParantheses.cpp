    // Given string containing '(', ')', '{', '}', '[', ']', determine if input is valid.

    // Example 1:
    // Input: "()"
    // Output: true

    // Example 2:
    // Input: "()[]{}"
    // Output: true

    // Example 3:
    // Input: "(]"
    // Output: false

    class Solution {
        public:
            bool isValid(string s) {
                stack<char> st;
                for (char ch : s) {
                    if (ch == '(' || ch == '{' || ch == '[') {
                        st.push(ch);
                    } else {
                        if (st.empty()) return false;
                        char top = st.top(); st.pop();
                        if ((ch == ')' && top != '(') ||
                            (ch == '}' && top != '{') ||
                            (ch == ']' && top != '['))
                            return false;
                    }
                }
                return st.empty();
            }
        };