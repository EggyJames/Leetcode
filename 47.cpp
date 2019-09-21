class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        perm(nums,0,nums.size()-1);
        return ans;
    }
    void perm(vector<int>nums,int l,int r){
        if(l == r)
            ans.push_back(nums);
        else{
            for(int i = l;i<=r;i++){
                if(i != l and nums[l] == nums[i])
                    continue;
                swap(nums[l],nums[i]);
                perm(nums,l+1,r);
            }
        }
    }
};
