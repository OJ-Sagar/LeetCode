class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int mid = low;
        while (low<=high){

            mid = low + (high - low) / 2;
            if (target == nums[mid])
            {                    
                return mid;
            }
            else if (nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};