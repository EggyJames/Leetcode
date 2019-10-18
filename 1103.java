class Solution {
    public int[] distributeCandies(int candies, int num_people) {
        int[] out = new int[num_people];
        int cnt = 1;
        while(candies > 0){
            if(cnt <= candies){
                out[(cnt-1)%num_people] += cnt;
                candies -= cnt;
                cnt++;
            }else{
                out[(cnt-1)%num_people] += candies;
                candies = 0;
            }
        }
        return out;
        
    }
}
