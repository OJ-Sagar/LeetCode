class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        int temp = x;        
        long rem,sum = 0;        
        
        while (temp > 0){
            rem = temp%10;
            sum = (sum*10)+rem;
            temp /= 10;
        }
        
        return sum == x;
    }
};