class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>out(num_people,0);
        int cnt = 1;
        while(candies > 0){
            if(cnt <= candies)
            {
                out[(cnt - 1)%num_people] += cnt;
                candies -= cnt;
                cnt++;
            }else{
                out[(cnt - 1)%num_people] += candies;
                candies = 0;
            }
            
        }
        return out;
    }
};
