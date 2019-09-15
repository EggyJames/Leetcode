class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        if(r == 0 || r < 0)
            return;
        for(int i = 0;i<=r;){
            if(nums[i] == 0)
            {
                int temp = nums[l];
                nums[l] = 0;
                nums[i] = temp;
                l++;
                i++;
            }else if(nums[i] == 2){
                 int temp = nums[r];
                nums[r] = 2;
                nums[i] = temp;
                r--;
            }else
                i++;
            if(r<l)
                break;
        }
    }
};
