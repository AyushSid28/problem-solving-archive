// TinyURL is a URL shortening service where you enter a URL such as https://leetcode.com/problems/design-tinyurl and it returns a short URL such as http://tinyurl.com/4e9iAk. Design a class to encode a URL and decode a tiny URL.

// There is no restriction on how your encode/decode algorithm should work. You just need to ensure that a URL can be encoded to a tiny URL and the tiny URL can be decoded to the original URL.


// Example 1:

// Input: url = "https://leetcode.com/problems/design-tinyurl"
// Output: "https://leetcode.com/problems/design-tinyurl"

// Explanation:
// Solution obj = new Solution();
// string tiny = obj.encode(url); // returns the encoded tiny url.
// string ans = obj.decode(tiny); // returns the original url after decoding it.

class Solution {
    unordered_map<string, string> codeToUrl;
    unordered_map<string, string> urlToCode;
    int counter = 0;

public:
    string encode(string longUrl) {
        if (urlToCode.count(longUrl)) return urlToCode[longUrl];
        string code = "http://tiny/" + to_string(counter++);
        codeToUrl[code] = longUrl;
        urlToCode[longUrl] = code;
        return code;
    }

    string decode(string shortUrl) {
        return codeToUrl[shortUrl];
    }
};