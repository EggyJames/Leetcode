class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum = 0;
        if(grid.size() == 0)
            return sum;
        vector<int>temp(grid[0].size()+2,0);
        vector<vector<int>>ceshi(grid.size()+2,temp);
        for(int i = 1;i<=grid.size();i++)
            for(int j = 1;j<=grid[0].size();j++)
                ceshi[i][j] = grid[i-1][j-1];
        for(int i = 1;i<=grid.size();i++)
            for(int j = 1;j<=grid[0].size();j++)
            {
                if(ceshi[i][j] == 1){
                    if(ceshi[i-1][j] == 0) sum++;
                    if(ceshi[i][j-1] == 0) sum++;
                    if(ceshi[i+1][j] == 0) sum++;
                    if(ceshi[i][j+1] == 0) sum++;
                }
            }
        return sum;
    }
};
