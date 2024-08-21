//1:

class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0,k=0;
        int flag;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[j]){
                k=i;
                flag=1;
                j=0;
                while(j<needle.size() && k<haystack.size()){
                    if(haystack[k]!=needle[j]){
                        flag = 0;
                        break;
                    }
                    j++;
                    k++;
                }
                if(flag){
                    return i;
                }
            }
        }
        return -1;
    }
};

//2:

class Solution {
public:
    int strStr(string haystack, string needle) {
    int m = haystack.size();
    int n = needle.size();
    
    for (int i = 0; i <= m - n; i++) {
        int j = 0;
        while (j < n && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == n) {
            return i;
        }
    }
    return -1;
}


};