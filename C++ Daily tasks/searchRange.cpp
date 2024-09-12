class Solution {
private:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, firstPos = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                firstPos = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return firstPos;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, lastPos = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                lastPos = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return lastPos;
    }
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        if (first == -1) {
            return{ -1, -1 };
        }

        int last = findLast(nums, target);

        return{ first, last };
    }
};