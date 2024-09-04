class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        if(!checkConstraints(candidates,target)){
            return result;
        }
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,result,combination,0);
        return result;
    }
private:
    void backtrack(vector<int>& candidates, int target,vector<vector<int>>& result,   vector<int>&combination,int start){
        if(target==0){
            result.push_back(combination);
            return;
        }
        for(int i=start;i<candidates.size() && candidates[i]<=target;i++){
            if(i > start && candidates[i]==candidates[i-1]){
                continue;
            }
            combination.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],result,combination,i+1);
            combination.pop_back();
        }
    }
    bool checkConstraints(vector<int>& candidates, int target){
        if(candidates.size() <= 0 || candidates.size() > 100){
            return false;
        }
        if(target <= 0 || target > 30){
            return false;
        }
        for(int i=0;i<candidates.size();i++){
            if(candidates[i] <= 0 || candidates[i] > 50){
                return false;
            }
        }
        return true;
    }
};