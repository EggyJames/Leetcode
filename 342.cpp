class Solution {
public:
    bool isPowerOfFour(int num) {
       if(num<=0 or num&(num-1))    //num&(num-1) 判断num是不是2的幂
           return false;
        return num % 3 == 1;    //若num是2的幂，那么继续判断是否对3取余是1
    }
};
