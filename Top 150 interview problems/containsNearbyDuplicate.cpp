class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]].push_back(i);
        }
        int count=0;
        for(const auto& n: map)
        {
            if(n.second.size() > 1)
            {
                for(int i=1;i < n.second.size();i++)
                {
                    if(n.second[i] - n.second[i-1] <= k)
                        return true;
                }
            }
        }
        return false;
    }
};