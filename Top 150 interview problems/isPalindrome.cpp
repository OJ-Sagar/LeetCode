class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 48 && s[i] <= 57))
                st.push_back(tolower(s[i]));
        }
        int l = 0;
        int r = st.size()-1;
        while (l<r)
        {
            if (st[l] != st[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};