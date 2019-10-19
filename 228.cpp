class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> out;
        int n = nums.size();
        if(n == 0)
            return out;
        else if(n == 1){
            out.push_back(to_string(nums[0]));
            return out;
        }
        int index= 0;
        int cnt = 1;
        for(int i = 1;i<n;i++){
            if((long long)nums[i] - (long long)nums[i-1] == 1){
                cnt++;
            }else{
                if(cnt == 1){
                    out.push_back(to_string(nums[i-1]));
                    index = i;
                }else{
                    string s = to_string(nums[index]) +"->"+to_string(nums[i-1]);
                    cnt = 1;
                    out.push_back(s);
                    index = i;
                }
            }
        }
        if(cnt == 1){
            out.push_back(to_string(nums[n-1]));
        }
        else{
            string s = to_string(nums[index]) +"->"+to_string(nums[n-1]);
            out.push_back(s);
        }
        return out;
    }
};
