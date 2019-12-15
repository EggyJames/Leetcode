class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>res(num+1,-1);
        res[0] = 0;
        if(num == 0)
            return res;
        res[1] = 1;
        for(int i = 1;i<=num;i*=2){
            res[i] = 1;
        }
        for(int i = 1;i<=num;i++){
            if(i%2 == 1)
                res[i] = res[i/2] + 1;
            else
                res[i] = res[i/2];
        }
        return res;
    }
};
