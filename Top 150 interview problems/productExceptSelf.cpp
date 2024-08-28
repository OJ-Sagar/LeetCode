class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int check = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                prod = nums[i] * prod;
            }
            else{
                check++;
            }

        }

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0 && check == 1){
                nums[i] = prod;
            }
            else if (check == 0){
                nums[i] = prod / nums[i];
            }
            else if (check != 0){
                nums[i] = 0;
            }
        }

        return nums;
    }
};