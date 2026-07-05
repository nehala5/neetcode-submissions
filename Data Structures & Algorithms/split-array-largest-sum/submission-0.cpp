class Solution {
public:
    int cntparts(vector<int>& nums, int p){ //p = max possible sum
        int n = nums.size();
        int partition = 1;
        long long subsum = 0;
        for(int i=0;i<n;i++){
            if(subsum + nums[i] <= p){
                subsum += nums[i];
            }else{
                partition ++;
                subsum = nums[i];
            }
        }
        return partition;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(),0);
        int low = maxi;
        int high = sum;
         while(low<=high){
           int mid = low + (high - low)/2;
           if(cntparts(nums,mid) >k){
            low = mid+1;
           }else{
            high= mid-1;
           }
        }
        return low;
    }
};