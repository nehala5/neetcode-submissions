class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = INT_MIN;
        int l=0, r= n-1;
        while(l<r){
            int h = min(heights[l], heights[r]);
            int w = r-l;
            if(heights[l]< heights[r]) l++;
            else r--;
            ans = max(ans, h*w);
            
        }
        return ans;
    }
};
