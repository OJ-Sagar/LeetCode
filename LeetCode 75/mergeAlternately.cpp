class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1.empty() && word1.empty()){
            return "";
        }
        string s;
        int j=0,k=0;
        for(int i=0;i<word1.size()+word2.size();i++){
            if(j<word1.size()){
                s += word1[j++];
            }
            if(k<word2.size()){
                s += word2[k++];
            }
        }
        return s;
    }
};