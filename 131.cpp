class Solution {
public:
    vector<vector<string>>out;
    vector<string>temp;
    bool isHuiWen(string s){
        if(s.length() == 1)
            return true;
        int n = s.length()/2;
        for(int i = 0;i<n;i++)
            if(s[i] != s[s.length() - 1- i])
                return false;
        return true;
    }
    
    void recursion(string s,int a,int b){
        if(a > b)
        {
            out.push_back(temp);
            return;
        }
        for(int i = 1;i<=b-a+1;i++){
            if(isHuiWen(s.substr(a,i))){
                temp.push_back(s.substr(a,i));
                recursion(s,a+i,b);
                temp.pop_back();
            }
        }
    }
   
    vector<vector<string>> partition(string s) {
       recursion(s,0,s.size()-1);
        return out;
    }
    

};
