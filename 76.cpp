class Solution {
public:
    string minWindow(string s, string t) {
        int charNum[256] = {0};
        for(auto c : t)
            charNum[c]++;
        string out= "";
        int len = 0,minLength = s.length();
        for(int l = 0,r = 0;r<s.length();r++){
            if(charNum[s[r]]-- > 0) len++;
            while(len == t.length()){
                if(r - l + 1 <= minLength){
                    minLength = r - l + 1;
                    out = s.substr(l,minLength);
                }
                if (++charNum[s[l++]] > 0) --len;
            }
        }
        return out;
    }
};
