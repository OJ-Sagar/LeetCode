class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = i;   
        }
        int comp=0;
        for(int i=0;i<nums.size();i++){
            comp=target-nums[i];
            if(map.count(comp) && map[comp]!=i){
                sum.push_back(i+1);
                sum.push_back(map[comp]+1);
                break;
            }
        }
        return sum;
    }
};