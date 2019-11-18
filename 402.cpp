class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length() == k)
            return "0";
        if(k == 0)
            return num;
        int i = 0;
        while(i+1 < num.length() and num[i] <= num[i+1])
            i++;
        string s1,s2;
        s1 = num.substr(0,i);
        s2 = num.substr(i+1);
        s1 = s1 + s2;
        i = 0;
        while(s1[i] == '0')
            i++;
        s1 = s1.substr(i);
        return removeKdigits(s1,k-1);
    }
};
