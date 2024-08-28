class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;

        if (nums.empty()) return s;

        int f = nums[0]; 
        int l = nums[0];  

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                l = nums[i];
            }
            else {
                if (f != l) {
                    s.push_back(to_string(f) + "->" + to_string(l));
                }
                else {
                    s.push_back(to_string(f));
                }
                f = nums[i];
                l = nums[i];
            }
        }

        if (f != l) {
            s.push_back(to_string(f) + "->" + to_string(l));
        }
        else {
            s.push_back(to_string(f));
        }

        return s; 
    }
};