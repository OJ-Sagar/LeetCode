class Solution {
public:
    int findComplement(int num) {
        
        string s = toBinary(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                s[i] = '0';
            }
            else{
                s[i] = '1';
            }
        }
        num = binaryToDecimal(s);
        return num;
    }
private:
        string toBinary(int n) {
            if (n == 0) return "0";
            
            string binary = "";
            while (n > 0) {
                binary = (n % 2 == 0 ? "0" : "1") + binary;
                n /= 2;
            }
            return binary;
        }
        int binaryToDecimal(const string &binary) {
            int decimal = 0;
            int length = binary.length();

            for (int i = 0; i < length; i++) {
                if (binary[length - 1 - i] == '1') {
                    decimal += pow(2, i);
                }
            }
            return decimal;
        }
};