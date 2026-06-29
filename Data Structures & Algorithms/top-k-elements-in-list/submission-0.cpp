class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int x:nums){
            mpp[x] ++;
        }
        vector<pair<int, int>>a;
        for(auto it:mpp){
            a.push_back({it.second, it.first});
        }
        sort(a.begin(), a.end());
        vector<int>b;
        for(int i = a.size()-1; i >= (int)a.size() - k; i--){
            b.push_back(a[i].second);
        }
        return b;
    }
};
