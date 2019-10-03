class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>out;
        if(nums.size() == 0 || nums.size() == 1)
            return out;
        for(int i = 0;i<nums.size();i++){
            int num = abs(nums[i]);
            if(nums[num - 1] > 0)
                nums[num - 1] *= -1;
            else
                out.push_back(num);
        }
        return out;
    }
};
