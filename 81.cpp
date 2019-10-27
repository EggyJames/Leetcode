class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return false;
        else if(nums.size() == 1){
            if(target == nums[0])
                return true;
            else
                return false;
        }
           
        int min = nums[0];
        int ind = 0;
        int n = nums.size();
        for(int i = 1;i<nums.size();i++){
            if(nums[i] < min)
            {
                ind = i;
                break;
            }else
                min = nums[i];
        }
        int l = 0,r = n-1;
        while(l<=r){
            int mid = (l + (r-l)/2 + ind)%n;
            if(nums[mid] == target)
                return true;
            else if(nums[mid] > target)
                r = l + (r-l)/2 - 1;
            else if(nums[mid] < target)
                l = l + (r-l)/2 + 1;
        }
        return false;
        
    }
};
