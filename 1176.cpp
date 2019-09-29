class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum+=(calories[i]);
        }
        int grade = 0;
        if(sum > upper)
            grade++;
        if(sum < lower)
            grade--;
        for(int i = 1;i+k<calories.size()+1;i++){
            sum = sum - calories[i-1] + calories[i+k-1];
            if(sum > upper)
                grade++;
            if(sum < lower)
                grade--;
        }
        return grade;
    }
};
