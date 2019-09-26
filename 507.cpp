class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num % 2 == 1)
            return false;
        int tem = 1;
        for(int i = 2;i<num/i;i++){
            if(num%i == 0){
                tem+=(i + num/i);
            }
        }
        return tem==num;
    }
};
