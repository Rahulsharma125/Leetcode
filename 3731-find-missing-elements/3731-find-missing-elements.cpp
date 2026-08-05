class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans{};
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            int curr = nums[i];
            int next = nums[i+1];
            while(curr + 1 < next){
                ans.push_back(curr+1);
            curr++;
            }
        }
        return ans;
    }
};