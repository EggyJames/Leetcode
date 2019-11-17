class Solution {
public:
    static bool cmp(vector<int>node1,vector<int>node2){
        return node1[1] == node2[1] ? (node1[0] < node2[0]) : (node1[1] < node2[1]);
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),cmp);
        vector<vector<int>>out;
        for(int i = 0;i<people.size();i++){
            int cnt = 0;
            int j = 0;
            while(j<out.size() and cnt <= people[i][1])
            {
                if(people[i][0] <= out[j][0])
                    cnt++;
                j++;
            }
            if(cnt - 1 == people[i][1])
                out.insert(out.begin() + j-1,people[i]);
            else
                out.insert(out.begin() + j,people[i]);
        }

        return out;
    }
};
