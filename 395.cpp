class Solution {
public:
    int longestSubstring(string s, int k) {
        if(k<=1)
            return s.size();
        if(s.empty() || s.size() < k)
            return 0;
        map<char,int>m;
        for(char c :s){
            m[c]++;
        }
        int i = 0;
        while(i<s.size() and m[s[i]] >= k)
            i++;
        if(i == s.size())
            return i;
        int l = longestSubstring(s.substr(0,i),k);
        while(i<s.size() and m[s[i]] < k)
            i++;
        int r = longestSubstring(s.substr(i),k);
        return max(l,r);
    }
};
