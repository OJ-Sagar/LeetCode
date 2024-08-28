class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char> store;
        int maxLength = 0, i = 0, j = 0;

        while (j < s.size()) {
            if (store.find(s[j]) == store.end()) {
                store.insert(s[j]);
                maxLength = max(maxLength, j - i + 1);
                j++;
            } else {
                store.erase(s[i]);
                i++;
            }
        }

        return maxLength;
    }
};