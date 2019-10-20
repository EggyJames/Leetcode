class Solution {
    public List<Boolean> prefixesDivBy5(int[] A) {
        List<Boolean> res = new ArrayList<>();
        int currentRear = 0;
        for(int i = 0;i < A.length;i++){
            currentRear = (currentRear * 2 + A[i])%10;
            if(currentRear == 0|| currentRear==5)
                res.add(true);
            else
                res.add(false);
        }
        return res;
    }
}
