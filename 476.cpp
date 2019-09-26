class Solution {
public:
    int findComplement(int num) {
        int t = log2(num);
        return (pow(2,t+1)-1-num);
    }
};
