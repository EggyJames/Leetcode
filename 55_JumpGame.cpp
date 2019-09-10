class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max1 = 0;
        for(int i = 0;i<nums.size();i++){
            if(i > max1) return false;
            max1 = max(i+nums[i],max1);
        }
        return true;
    }
};
