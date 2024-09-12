Mathod 1:
class Solution {
public:
    string reverseVowels(string s) {
        if(s.size()<=1){
            return s;
        }
        unordered_set<char> set = {'a','e','i','o','u','A','E','I','O','U'};
        int l = s.size()-1,i=0;
        char t;
        while(i<=l){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||
             s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' ||
                s[l]=='u' || s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U' ){
                    t = s[l];
                    s[l] = s[i];
                    s[i] = t;
                    l--;
                    i++;
                }
                else{
                    l--;
                }
             }
             else{
                i++;
             }
        }
        return s;
    }
};


Mathod 2:
class Solution {
public:
    string reverseVowels(string s) {
        if(s.size()<=1){
            return s;
        }
        unordered_set<char> set = {'a','e','i','o','u','A','E','I','O','U'};
        int i=0;
        int j = s.size()-1;
        while(i<j){
            if(set.find(s[i]) != set.end() && set.find(s[j]) != set.end()){
                swap(s[i],s[j]);
                j--;
                i++;
            }
            else if(set.find(s[i]) != set.end()){
                j--;
            }
            else if(set.find(s[j]) != set.end()){
                i++;
            }
            else{
                j--;
                i++;
            }
        }
        return s;
    }
};