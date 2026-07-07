class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int area = 1;
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j = i;j<n;j++){
                int h = min(heights[i], heights[j]);
                int w = j-i;
            
            ans = max(ans, h*w);
            }
        }
        return ans;
    }
};
