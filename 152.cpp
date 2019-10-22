class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        else if(nums.size() == 1)
            return nums[0];
        int a = 1,b = 1;
        int maxval = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            int aa = a*nums[i];
            int bb = b*nums[i];
            
            a = min(nums[i],min(aa,bb));
            b = max(nums[i],max(aa,bb));
            
            maxval = max(maxval,b);
        }
        
        
        return maxval;
        
    }
};
