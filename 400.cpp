class Solution {
public:
    int findNthDigit(int n) {
        int i = 1;
        while(n>i*pow(10,i-1)*9){
            n = n - i*pow(10,i-1)*9;
            i++;
        }
        int num = (n-1)/i + pow(10,i-1);
        string tem = to_string(num);
        if(n%i==0)return (tem[i-1]-'0');   
         return (tem[n%i-1]-'0');     
    }
};
