class Solution {
private:
    int ans;
public:
    void backtrack(vector<bool>& used,vector<char> &tile,int dep){
        if(dep == tile.size()){
            return;
        }
        for(int i = 0;i<tile.size();i++){
            if(!used[i]){
                ans++;
                used[i] = true;
                backtrack(used,tile,dep+1);
                used[i]=false;
                while(i<tile.size()-1 and tile[i] == tile[i+1])
                    i++;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        if(tiles.length() == 0 || tiles.length() == 1)
            return tiles.length();
        ans = 0;
        vector<bool>used(tiles.length(),false);
        vector<char> tile(tiles.length());
        copy(tiles.begin(),tiles.end(),tile.begin());
        sort(tile.begin(),tile.end());
        backtrack(used,tile,0);
        return ans;
        
    }
};
