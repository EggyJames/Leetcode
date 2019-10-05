class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int len = nums.size();
        if(len == 0 || len == 1)
            return len;
        vector<int>tmp(nums.size() -1);
        for(int i = 0;i<nums.size() - 1;i++){
            tmp[i] = nums[i+1] - nums[i];
        }
        int cnt = 1;
        int flag = 1;
        int j = 0;
        for(;j<len-1;j++)
        {
            if(tmp[j] > 0)
            {
                flag = 1;
                break;
            }
            else if(tmp[j] < 0)
            {
                flag = -1;
                break;
            }
        }
        for(int i = j;i<len-1;i++){
            if(flag * tmp[i] > 0){
                cnt++;
                flag *= -1;
            }
        }
        return cnt;
    }
};
