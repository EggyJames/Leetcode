class Solution {
public:
    bool isMatch(string s, string p) {
       int i = 0,j = 0,k = 0,star = -1;
        while(i < s.length()){
            if(s[i] == p[j] || p[j] == '?'){
                ++i;
                ++j;
                continue;
            }
            if(p[j] == '*'){
                star = j++;
                k = i;
                continue;
            }
            if(star != -1){
                i = ++k;
                j = star + 1;
                continue;
            }
            return false;
        }
        while( j < p.length() and p[j] == '*') ++j;
        return j == p.length();
    }
};
//使用回溯法，当遇到*时，就不断回溯，一旦不想等，就回到*处，
