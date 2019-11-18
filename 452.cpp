class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b){
        return a[1] <= b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 1 || points.size() == 0)
            return points.size();
        sort(points.begin(),points.end(),cmp);
        int cnt = 0;
        int shot = -5;
        for(int i = 0;i<points.size();i++){
            if(shot < points[i][0]){
                cnt++;
                shot = points[i][1];
            }
        }
        return cnt;
    }
};
