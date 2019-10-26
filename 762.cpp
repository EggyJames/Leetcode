class Solution {
public:
    bool isPrime(int n){
        if(n == 2 || n == 3)
            return true;
        else if(n < 2 || n%2 == 0)
            return false;
        else{
            for(int i = 3;i*i<=n;i+=2){
                if(n%i == 0)
                    return false;
            }
        }
        return true;
    }
    int count(int n){
        int cnt = 0;
        while(n){
            if(n%2==1)
                cnt++;
            n/=2;
        }
        return cnt;
    }
    int countPrimeSetBits(int L, int R) {
        int cnt = 0;
        for(int i = L;i<=R;i++){
            int q = count(i);
            if(isPrime(q))
                cnt++;
        }
        return cnt;
    }
};
