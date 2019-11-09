class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>out;
        for(int i = 0;i<nums.size();i++){
            if(m[nums[i]] == 0){
                m[target-nums[i]]=i+1;
            }else{
                out.push_back(m[nums[i]]-1);
                out.push_back(i);
                break;
            }
        }
        return out;
        
    }
};

//通过map来存储配对的数，如果后面有就直接匹配成功
