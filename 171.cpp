class Solution {
public:
    int titleToNumber(string s) {
        if(s == "")
            return 0;
        long long sum = 0;
        long long cnt = 1;
        int n = s.length()-1;
        for(int i = n;i>=0;i--){
            sum+=(s[i] - 'A' + 1) * cnt;
            cnt*=26;
        }
        return sum;
    }
};
