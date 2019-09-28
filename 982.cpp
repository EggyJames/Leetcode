class Solution {
public:
    int countTriplets(vector<int>& A) {
        if(A.size() == 0)
            return 0;
        unordered_map<int,int>m;
        for(int i = 0;i<A.size();i++)
            for(int j = 0;j<A.size();j++){
                m[A[i]&A[j]]++;
            }
        int sum = 0;
        for(auto key : m){
            for(int j = 0;j<A.size();j++){
                if((key.first & A[j]) == 0)
                    sum+=key.second;
            }
        }
        return sum;
    }
};
