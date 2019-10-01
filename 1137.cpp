class Solution {
public:
    int num[100] = {0};
    int tribonacci(int n) {
        num[0] = 0;
        num[1] = 1;
        num[2] = 1;
        int out = 0;
        if(n == 0 || n == 1 || n == 2)
            return num[n];
        if(n < 0)
            return 0;
        if(num[n-1] == 0)
        {
            num[n - 1] = tribonacci(n-2) + tribonacci(n-3)+tribonacci(n-4);
        }
        if(num[n-2] == 0)
        {
            num[n - 2] = tribonacci(n-3) + tribonacci(n-4)+tribonacci(n-5);
        }
        if(num[n-3] == 0){
            num[n-3] = tribonacci(n-4) + tribonacci(n-5)+tribonacci(n-6);
        }
        num[n] = num[n-1] + num[n-2] + num[n-3];
        return num[n];
    }
};
