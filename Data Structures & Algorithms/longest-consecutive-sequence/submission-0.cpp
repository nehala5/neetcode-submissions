class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(int x : st){
            if(st.count(x-1)) continue;
            int cnt =1;
            int cur = x;
            
            while(st.count(cur+1)){
                cnt++;
                cur++;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
