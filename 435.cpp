class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b){
        return(a[0] == b[0] ? a[1] < b[1] : a[0] < b[0]);
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() == 0 || intervals.size() == 1)
            return 0;
        sort(intervals.begin(),intervals.end(),cmp);
        int cnt = 0;
        int r = intervals[0][1];
        for(int i = 1;i<intervals.size();i++){
            if(r > intervals[i][0])
            {
                cnt++;
                r = min(r,intervals[i][1]);
            }
            else
                r = intervals[i][1];
        }
        return cnt;
    }
};
