class Solution {
public:
    static bool cmp(string s1,string s2){
        return (s1+s2) > (s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string>out;
        for(int i = 0;i<n;i++){
            out.push_back(to_string(nums[i]));
        }
        sort(out.begin(),out.end(),cmp);
        string str = "";
        for(int i = 0;i<n;i++)
            str=str+out[i];
        if(str[0] == '0')
            return "0";
        return str;
        
    }
};
