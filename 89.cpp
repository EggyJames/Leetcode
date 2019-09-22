class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v((1<<n),0);
        for(int i = 1<<n;i--;v[i] = i^(i>>1));
        return v;
    }
};
