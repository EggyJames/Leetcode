class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector<pair<int,int>>v;
        for(int i = 0;i<n;i++)
            v.push_back({difficulty[i],profit[i]});
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        int j = -1,mp = 0,res = 0;
        for(int i = 0;i<worker.size();i++){
            while(j+1<n and v[j+1].first <= worker[i]){
                j++;
                mp = max(mp,v[j].second);
            }
            res+=mp;
        }
        return res;
    }
};
