class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        int p=0;
        for(int i=0;i<flowerbed.size();){
            if(flowerbed[i]==0 && conLeft(flowerbed,i) && conRight(flowerbed,i)){
                p++;
                i+=2;
            }
            else
                i++;
        }
        if(p>=n){
            return true;
        }
        else
            return false;
    }
    bool conLeft(vector<int>& nums, int n){
        if(n==0){
            return true;
        }
        if(nums[n-1]==0)
            return true;
        else
            return false;
    }
    bool conRight(vector<int>& nums, int n){
        if(n==nums.size()-1){
            return true;
        }
        if(nums[n+1]==0)
            return true;
        else
            return false;
    }
};