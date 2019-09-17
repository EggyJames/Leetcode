class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>out(n,vector<int>(n,0));
        if(n == 0){
            vector<vector<int>>int1;
            return int1;
        }
        int cnt = 1;
        for(int i = 0;i<n/2+1;i++){
            for(int j = i;j<n-i;j++)
            {
                out[i][j] = cnt;
                cnt++;
            }
            for(int j = i+1;j<n-i;j++){
                out[j][n-i-1] = cnt;
                cnt++;
            }
            for(int j = n-i-2;j>=i;j--){
                out[n-i-1][j] = cnt;
                cnt++;
            }
            for(int j = n-i-2;j>i;j--){
                out[j][i] = cnt;
                cnt++;
            }
        }
        return out;
    }
};
