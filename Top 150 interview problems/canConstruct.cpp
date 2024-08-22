class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            
        if (ransomNote.size() > magazine.size()) return false;
        
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int j = 0, count = 0;
        for (int i = 0; i < magazine.size(); i++)
        {
            if (ransomNote[j] == magazine[i] && j<ransomNote.size()){
                count++;
                j++;
            }
        }
        return count == ransomNote.size() ? true : false;
    }
};