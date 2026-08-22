class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(i != nums[i]){
        //         return i;
        //     }
        // }
        // return nums[nums.size()-1] + 1;

        int n = nums.size(), sum = 0;
        int actualSum = n*(n+1)/2;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        return actualSum - sum;
    }
};