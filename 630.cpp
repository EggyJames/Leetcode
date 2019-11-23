class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b){
        return a[1] == b[1]?a[0] < b[0] : a[1] < b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        int time = 0;
        priority_queue<int>res;
        for(int i = 0;i<courses.size();i++){
            if(time + courses[i][0] <= courses[i][1]){
                time+=courses[i][0];
                res.push(courses[i][0]);
            }else if(!res.empty() and res.top() > courses[i][0]){
                time = time - res.top() + courses[i][0];
                res.pop();
                res.push(courses[i][0]);
            }
        }
        return res.size();
    }
};
