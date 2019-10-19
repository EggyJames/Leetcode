class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool>res;
        int currentRear = 0;
        for(int i = 0;i<A.size();i++){
            currentRear = (currentRear * 2 + A[i]) % 10;
            if(currentRear == 0 || currentRear == 5)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};
