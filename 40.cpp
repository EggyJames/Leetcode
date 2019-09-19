class Solution {
public:
    set<vector<int>>ou;
    void add(vector<int> tmp,vector<int>& can,int l,int target){
        if(l<=can.size()){
            if(target == 0)
            {
                ou.insert(tmp);
            }
            else if(l<can.size() and
                    target >= can[l]){
                add(tmp,can,l+1,target);
                tmp.push_back(can[l]);
                add(tmp,can,l+1,target-can[l]);
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>output;
        if(candidates.size() == 0 || target < candidates[0])
            return output;
        vector<int>lingshi;
        if(candidates[candidates.size()-1] == target)
        {
            lingshi.push_back(target);
            ou.insert(lingshi);
        }
        vector<int>temp;
        add(temp,candidates,0,target);
        for(auto ve : ou)
            output.push_back(ve);
        return output;
    }
};
