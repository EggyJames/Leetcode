class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        int cnt = 0;
        int k = 0;
        for(int i = 0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0)
                cnt++;
            else
                cnt = 0;
            if(cnt >= 3)
            {
                k++;
                cnt-=2;
            }
        }
        if(k >= n)
            return true;
        else
            return false;
            
        return true;
    }
};
