class Solution {
public:
    void move(vector<int>& nums,int l,int r){
        int temp = nums[l];
        for(int i = l;i<r;i++){
            nums[i] = nums[i+1];
        }
        nums[r] = temp;
    }
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int cnt = 0;
        int cnt1 = 0;
        int r = nums.size()-1;
        int temp = nums[0];
        for(int i = 0;i<=r;i++){
            if(nums[i] == temp){
                cnt++;
            }else{
                cnt = 1;
                temp = nums[i];
            }
            if(cnt>2){
                cnt1++;
                move(nums,i,r);
                r--;
                if(temp != nums[i]){
                    temp = nums[i];
                    cnt = 1;
                    continue;
                }
                i--;
                cnt--;
            }
        }
        return nums.size()-cnt1;
    }
};
