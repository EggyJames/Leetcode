class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n == 0 || tasks.size() == 0 || tasks.size() == 1)
            return tasks.size();
        vector<int>a(26,0);
        for(int i = 0;i<tasks.size();i++){
            a[tasks[i] - 'A']++;
        }
        sort(a.begin(),a.end());
        int res = (a[25]-1)*(n+1);
        int i = 25;
        while(i>=0 and (a[i] == a[25])){
            res++;
            i--;
        }
        return res > tasks.size()?res:tasks.size();
    }
};
