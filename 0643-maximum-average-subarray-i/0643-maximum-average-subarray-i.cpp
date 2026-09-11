class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        int start = 0;

        // First window
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        maxi = sum;

        // Slide the window
        for(int i = k; i < n; i++){
            sum += nums[i];
            sum -= nums[start];
            start++;

            maxi = max(maxi, sum);
        }

        return (double)maxi / k;
    }
};