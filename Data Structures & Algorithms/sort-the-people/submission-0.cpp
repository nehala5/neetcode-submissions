class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, int>>a;
        int n = heights.size();
        for(int i=0;i<n;i++){
            a.push_back({heights[i], i});
        }
        sort(a.begin(), a.end(),greater<>());
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = names[a[i].second];
        }
        return ans;
    }
};