class Solution {
public:
    int sumSubarrayMins(vector<int>& A) {
        int stack[30001],top = 0,dp[30001];
        int i;
        long sum = 0;
        stack[top++] = -1;
        for(i = 0;i<A.size();i++){
            while(top>1 and A[i] < A[stack[top-1]])
                top--;
            stack[top++] = i;
            dp[i] = (stack[top-2] > -1 ? dp[stack[top-2]] : 0) + (i - stack[top-2]) * A[i];
            sum+=dp[i];
        }
        return sum%1000000007;
    }
};
