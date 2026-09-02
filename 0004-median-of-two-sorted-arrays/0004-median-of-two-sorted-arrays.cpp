class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0; i<m; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int t = n + m;
        if(t%2==0){
            return ((double)nums1[t/2] + nums1[(t-1)/2])/2.0;
        }
        else{
            return nums1[t/2];
        }
    }
};