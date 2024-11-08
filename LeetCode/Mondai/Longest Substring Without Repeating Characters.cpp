class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int stringLenght = s.length();
        int longestSubstringLength = 0;

        unordered_set<char> charSet;
        int left = 0;

        for (int right = 0; right < stringLenght; right++) {
            if (charSet.count(s[right]) == 0) {
                charSet.insert(s[right]);

                longestSubstringLength = max(longestSubstringLength, right - left + 1);
            } else {
                while (charSet.count(s[right])) {
                    charSet.erase(s[left]);
                    left++;
                }
            }
            charSet.insert(s[right]);
        }

        return longestSubstringLength;
    }
};