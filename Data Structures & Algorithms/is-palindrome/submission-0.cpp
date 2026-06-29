class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string p = "";
        for(int i=0;i<n;i++){
           char ch = tolower(s[i]);
            if(isalnum(ch)) p+= ch;
        }
        for(int i=0;i<p.size()/2;i++){
            if(p[i] != p[p.size() - 1- i]) return false;
        }
        return true;
    }
};
