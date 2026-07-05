class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        int n = nums1.size();
        int m = nums2.size();
        int i=0, j=0;
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }else{
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            arr.push_back(nums2[j]);
            j++;
        }
        int d = arr.size();
        double ans = 0 ;
        if(d %2==0){
            ans = (arr[d/2 - 1] + arr[d/2]) / 2.0;
        }else{
            ans = arr[d/2];
        }
        return ans;

    }

};