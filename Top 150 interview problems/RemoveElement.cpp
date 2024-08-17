class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto rValue = remove(nums.begin(),nums.end(),val);
        nums.erase(rValue,nums.end());
        return nums.size();
    }
};