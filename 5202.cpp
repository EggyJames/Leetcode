class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>tem;
        for(auto i : arr)
            tem[i]++;
        map<int,int>out;
        for(auto i : tem){
            out[i.second]++;
            if(out[i.second] > 1)
                return false;
        }
        return true;
    }
};
