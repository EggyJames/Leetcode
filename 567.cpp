class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        if(n == 0)
            return true;
        if(n>s2.length())
            return false;
        vector<int>a(26,0);
        for(int i = 0;i<n;i++){
            a[(s1[i] - 'a')]++;
        }
        int cnt = 1;
        vector<int>b;
        string str;
        for(int i = 0;i<s2.length() - n+1;i+=1){
            str = s2.substr(i,n);
            b = a;
            for(int j = 0;j<n;j++){
                if(b[str[j]-'a'] != 0){
                    b[str[j]-'a']--;
                    cnt++;
                }else{
                    cnt = 1;
                    break;
                }
                if(cnt == n+1){
                    return true;
                }
            }
        }
        return false;
    }
};
