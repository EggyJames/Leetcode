class Solution {
public:
    vector<vector<int>>backtrack(vector<int>& nums,int start,vector<int>temp,vector<vector<int>>& res){
        res.push_back(temp);
        for(int i = start;i<nums.size();i++){
            if(i>start and nums[i] == nums[i-1])
                continue;
            temp.push_back(nums[i]);
            backtrack(nums,i+1,temp,res);
            temp.pop_back();
        }
        return res;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>temp;
        
        return backtrack(nums,0,temp,res);
        
    }
};
