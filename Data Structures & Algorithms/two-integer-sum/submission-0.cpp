class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int t =0;
        vector<int>a;
        for(int i=0;i<n;i++){
            t = target - nums[i];
            if(mpp.find(t) != mpp.end()){
                a.push_back(mpp[t]);
                a.push_back(i);
                return a;
            }
                mpp[nums[i]] = i;
            
        }
        return a;
    }
};
