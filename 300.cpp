class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int max = -1;
        int len = nums.size();
        if(len == 0 || len == 1)
            return len;
        vector<int>res(len,1);
        for(int i = 1;i<len;i++){
            for(int j = 0;j<i;j++){
                if(nums[j] < nums[i] and res[j]+1 > res[i])
                    res[i] = res[j]+1;
            }
        }
        for(int i = 0;i<len;i++){
            if(res[i] > max)
                max = res[i];
        }
        return max;
    }
};
