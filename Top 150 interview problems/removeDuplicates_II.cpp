class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int j = 0,count = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1]){
                if(count<1){
                    nums[++j] = nums[i];
                }
                count++;
            }
            else{
                nums[++j] = nums[i];
                count=0;
            }
        }
        return j + 1;
    }
};