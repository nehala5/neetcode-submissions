class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char, int> mpp;
        if(n != m) return false;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto it: mpp){
            if(it.second>0) return false;
        }
        return true;
    }
};
