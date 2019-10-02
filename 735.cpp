class Solution {
public:
    vector<int> asteroidmove(vector<int> asteroids){
        int i = 0;
        int max = 0;
        int len = asteroids.size();
        vector<int>out;
        int temp = 0;
        int index = 0;
        for(;i<len;i++){
            if(asteroids[i] < 0 and i == temp){
                out.push_back(asteroids[i]);
                temp++;
            }else if(asteroids[i] > 0){
                if(max <= asteroids[i]){
                    index = i;
                    max = asteroids[i];
                }
            }else if(asteroids[i] < 0){
                if(max + asteroids[i] > 0){
                    for(int j = temp;j<=index;j++){
                        out.push_back(asteroids[j]);
                    }
                     if(asteroids[index+1] > 0)
                        i = index;
                    temp = i+1;
                    index = temp;
                    max = 0;
                }else if(max + asteroids[i] == 0){
                    for(int j = temp;j<index;j++){
                        out.push_back(asteroids[j]);
                    }
                    temp = i+1;
                    index = temp;
                    max = 0;
                }else if(max + asteroids[i] < 0){
                    out.push_back(asteroids[i]);
                    temp = i+1;
                    index = temp;
                    max = 0;
                }
            }
            
        }
        if(temp != len){
            for(int i = temp;i<len;i++)
                out.push_back(asteroids[i]);
        }
        return out;
    }
    
    
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>out = asteroidmove(asteroids);
        vector<int>second =asteroidmove(out);
        if(out.size() == second.size())
            return out;
        else
            return asteroidCollision(second);
    }
};
