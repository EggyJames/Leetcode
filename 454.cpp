class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        if(A.size() == 0)
            return 0;
        map<int,int>m1;
        map<int,int>m2;
        for(int i = 0;i<A.size();i++){
            for(int j = 0;j<B.size();j++)
            {
                m1[A[i] + B[j]]++;
            }
        }
        for(int i = 0;i<A.size();i++){
            for(int j = 0;j<B.size();j++)
            {
                m2[C[i] + D[j]]++;
            }
        }
        int out = 0;
        for(auto it: m1){
            if(m2[-it.first] > 0)
                out+= (it.second * m2[-it.first]);
        }
        return out;
    }
};
