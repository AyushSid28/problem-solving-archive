// Check if Strings are Rotations of Each Other

// Check if s2 is a rotation of s1. "abcde" and "cdeab" → true.

```
s1 = "abcde"
s1+s1 = "abcdeabcde"
                ↑ "cdeab" found here!
```


bool isRotation(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    string doubled = s1 + s1;
    return doubled.find(s2) != string::npos;
}
