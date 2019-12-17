class Solution {
public:

    bool carPooling(vector<vector<int>>& trips, int capacity) {
    int sum = 0;
    multiset<pair<int,int>> m_set;
    for(auto& p: trips)
    {
        m_set.insert(make_pair(p[1], p[0]));
        m_set.insert(make_pair(p[2], -p[0]));
    }
    for(auto& p: m_set)
    {
        sum += p.second;
        if(sum > capacity)
            return false;
    }
    return true;

    }
};
