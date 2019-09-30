bool cmp(pair<int,string>a,pair<int,string>b){
        if(a.first == b.first){
            return a.second < b.second;
        }else{
            return a.first>b.first;
        }
    }
class Solution {
public:
vector<pair<int,string>>out1;
    
    void MapSortOfValue(vector<pair<int,string>>&out1,map<string,int> m){
        for(map<string,int> :: iterator it = m.begin();it!=m.end();it++)
            out1.push_back(make_pair(it->second,it->first));
        sort(out1.begin(),out1.end(),cmp);
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>temp;
        
        for(auto str : words)
            temp[str]++;
        MapSortOfValue(out1,temp);
        vector<string>ou;
        for(int i = 0;i<k;i++){
            ou.push_back(out1[i].second);
        }
        return ou;
    }
};
