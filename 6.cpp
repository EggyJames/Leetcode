class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.length() <= 1)
            return s;
        int lie = (s.length()/(numRows + numRows - 2)+1);
        int numlie = lie*(1+numRows-2);
        vector<vector<char>>out(numlie,vector<char>(numRows,'+'));
        int cnt = 0;
        for(int i = 0;i<numlie;i+=(1+numRows-2)){
            for(int j = 0;j<numRows;j++){
                if(cnt < s.length()){
                    out[i][j] = s[cnt];
                    cnt++;
                }else{
                    break;
                }
            }
            for(int k = 1;k<=numRows-2;k++){
                if(cnt<s.length()){
                    out[i+k][numRows-1-k]=s[cnt];
                    cnt++;
                }else{
                    break;
                }
            }
        }
        string l = "";
        for(int i = 0;i<numRows;i++){
            
            for(int j = 0;j<numlie;j++){
                if(out[j][i] != '+')
                    l = l + out[j][i];
            }
        }
        return l;
    }
};
