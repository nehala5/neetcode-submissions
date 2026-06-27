class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>f(26,0);
        int l=0, mf =0, ans =0;
        for(int r =0;r<s.size();r++){
            f[s[r] - 'A']++;
            mf = max(mf, f[s[r] - 'A']);
            if((r-l+1) - mf >k){
                f[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
