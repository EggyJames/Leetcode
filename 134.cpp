class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        vector<int>dec(n);
        int sum = 0;
        for(int i = 0;i<n;i++){
            dec[i] = gas[i]-cost[i];
            sum+=dec[i];
        }
        if(sum < 0)
            return -1;
        for(int i = 0;i<n;i++){
            if(dec[i] < 0)
                continue;
            int flag = 0;
            int k = n;
            sum = 0;
            while(k--){
                sum+=dec[(i+n-k-1)%n];
                if(sum<0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                continue;
            else
                return i;
            
        }
        return -1;
    }
};
