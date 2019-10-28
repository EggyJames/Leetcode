class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();){
            if(i<nums.size()-1 and nums[i] == nums[i+1] )
                i+=3;
            else
                return nums[i];
        }
        return 0;
    }
};
