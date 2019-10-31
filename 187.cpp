class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>out;
        if(s.length() < 10)
            return out;
         map<string,int>m;
        for(int i = 0;i<s.length()-10+1;i++)
            m[s.substr(i,10)]++;
        
        for(auto it : m){
            if(it.second >= 2)
                out.push_back(it.first);
        }
        return out;
    }
};
