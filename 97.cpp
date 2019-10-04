class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.length();
        int n = s2.length();
        int l = s3.length();
        if(m+n!=l)
            return false;
        if(m == 0)
            return(s2 == s3);
        else if(n == 0)
            return(s1 == s3);
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(int i = 1;i<=m;i++){
            if(s1[i-1] == s3[i-1] and dp[i-1][0] == 1)
                dp[i][0] = 1;
        }
        for(int i = 1;i<=n;i++){
            if(s2[i-1] == s3[i-1] and dp[0][i-1] == 1)
                dp[0][i] = 1;
        }
        for(int i = 1;i<=m;i++){
            for(int j = 1;j<=n;j++){
                if(s1[i-1] == s3[i+j-1] and dp[i-1][j] == 1)
                    dp[i][j] = 1;
                else if(s2[j-1] == s3[i+j-1] and dp[i][j-1] == 1)
                    dp[i][j] = 1;
                else 
                    dp[i][j] = 0;
                    
            }
        }
        return dp[m][n];

    }
};
