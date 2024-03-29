class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for(auto s:strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            hashmap[temp].push_back(s);
        }
        int len = hashmap.size();
        vector<vector<string>>out;
        for(auto i: hashmap){
            out.push_back(i.second);
        }
        return out;
    }
};
