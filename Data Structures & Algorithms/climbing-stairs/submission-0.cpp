class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1;
        int p2 =1 ,p1=1, c=0;
        for(int i=2;i<=n;i++){
            c = p2+p1;
            p2 = p1;
            p1 = c;
        }
        return c;
    }
};
