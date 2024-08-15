class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        unordered_map<int,int> map;
        int flag;
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = i;   
        }
        int comp=0;
        for(int i=0;i<nums.size();i++){
            comp=target-nums[i];
            if(map.count(comp) && map[comp]!=i){
                sum.push_back(i);
                sum.push_back(map[comp]);
                break;
            }
        }
        return sum;
    }

};