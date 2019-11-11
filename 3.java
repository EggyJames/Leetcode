class Solution {
    public int lengthOfLongestSubstring(String s) {
        int l = s.length(),index=0,j,max= 0;
        for(int i = 0;i<l;i++){
            for(j = index;j<i;j++){
                if((s.charAt(i))==(s.charAt(j))){
                    index = j+1;
                    break;
                }
            }
            if(j - index + 1 > max)
                max = j - index + 1;
        }
        return max;
    }
}
