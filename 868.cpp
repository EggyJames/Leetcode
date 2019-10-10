class Solution {
public:
    int binaryGap(int N) {
       int ans = 0;
        int pre = 233;
        int i = 0;
        while(N){
            if(N & 1){
                ans = max(i-pre,ans);
                pre = i;
            }
            N >>= 1;
            ++i;
        }
        return ans;
    }
};
