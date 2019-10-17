class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length() != B.length() || A.length()<2)
            return false;
        int cnt = 0;
        vector<int>test;
        for(int i = 0;i<A.length();i++){
            if(A[i] != B[i])
            {
                 cnt++;
                test.push_back(i);
            }
        }
        if(cnt != 2 and cnt != 0)
            return false;
        if(cnt == 2){
            if(A[test[0]] == B[test[1]] and A[test[1]] == B[test[0]])
                return true;
            else 
                return false;
        }else{
            map<char,int>temp;
            for(int i = 0;i<A.length();i++)
                temp[A[i]]++;
            int flag = 0;
            for(auto it:temp){
                if(it.second >= 2)
                {
                    return true;
                }
            }
            return false;
        }
        return true;
    }
};
