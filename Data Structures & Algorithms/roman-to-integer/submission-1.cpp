class Solution {
public:
    int value(char ch) {
        if (ch == 'I') return 1;
        if (ch == 'V') return 5;
        if (ch == 'X') return 10;
        if (ch == 'L') return 50;
        if (ch == 'C') return 100;
        if (ch == 'D') return 500;
        return 1000; // M
    }

    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int curr = value(s[i]);

            if (i + 1 < n && curr < value(s[i + 1])) {
                ans -= curr;
            } else {
                ans += curr;
            }
        }

        return ans;
    }
};