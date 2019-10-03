class Solution {
public:
    
    int minMoves(vector<int>& nums) {
        //每次n-1个数字加1等于有一个减1
        int cnt = 0;
        int len = nums.size();
        if(len == 1 || len == 0)
            return 0;
        int min = INT_MAX;
        for(int i = 0;i<len;i++)
        {
            if(nums[i] < min)
                min = nums[i];
        }
        for(int i = 0;i<len;i++)
            cnt+=(nums[i] - min);
        return cnt;
    }
};
