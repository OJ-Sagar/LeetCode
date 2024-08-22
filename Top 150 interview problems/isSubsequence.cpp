class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, count = 0;
        while (j<t.size() && i<s.size()){
            if (s[i] == t[j++]){
                i++;
                count++;
            }
        }
        if (count == s.size())
            return true;
        else
            return false;
    }
};