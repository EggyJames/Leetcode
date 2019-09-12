class Solution {
private:
    vector<int> candidate;
    vector<vector<int>> res;
    vector<int> path;
public:
    void DFS(int start,int target){
        if(target == 0){
            res.push_back(path);
            return;
        }
        for(int i = start;i<candidate.size() and target - candidate[i] >= 0;i++){
            path.push_back(candidate[i]);
            DFS(i,target - candidate[i]);
            path.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        this->candidate = candidates;
        DFS(0,target);
        return res;
    }
};
