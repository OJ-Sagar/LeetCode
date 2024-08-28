class Solution {
public:
   int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        // Sort the numbers first
        sort(nums.begin(), nums.end());

        int longest = 1;  // To store the longest consecutive sequence length
        int currentLength = 1;  // To keep track of the current sequence length

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            else if (nums[i] == nums[i - 1] + 1) {
                currentLength++;
            } else {
                longest = std::max(longest, currentLength);
                currentLength = 1; // Reset for a new sequence
            }
        }

        longest = std::max(longest, currentLength);

        return longest;
    }
};