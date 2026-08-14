class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            int start = 0, sum = 0;
            while( start <= i){
                sum += nums[start];
                start++;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};