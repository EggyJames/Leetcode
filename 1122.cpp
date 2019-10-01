class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        for(int i = 0;i<arr1.size();i++){
            m[arr1[i]]++;
        }
        int sum1 = 0;
        for(int i = 0;i<arr2.size();i++){
            while(m[arr2[i]]--)
                arr1[sum1++] = arr2[i];
        }
        int len = sum1;
        for(auto it : m){
            while(it.second != -1 and it.second -- ){
                arr1[sum1++] = it.first;
            }
        }
        sort(arr1.begin()+len,arr1.end());
        return arr1;
    }
};
