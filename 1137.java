class Solution {
    public int tribonacci(int n) {
        if(n == 0 || n == 1 || n ==2)
            return n == 0?0:1;
        int a = 0,b = 1,c = 1;
        int result = 1;
        for(int i = 3;i<=n;i++){
            result = a + b + c;
            a = b;
            b = c;
            c = result;
        }
        return result;
    }
}
