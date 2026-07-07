class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>b;
        int n = nums.size();
        //breute force
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    if(nums[i]+ nums[j] + nums[k] == 0){                    
                       vector<int>b =  {nums[i],nums[j],nums[k]};
                        sort(b.begin(), b.end());
                        st.insert(b);
                    }
                }
            }
        }
        vector<vector<int>> res(st.begin(), st.end());

        return res;
    }
};
