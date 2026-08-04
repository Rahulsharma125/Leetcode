class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int ele : nums){
            int temp = 0;
            while(ele > 0){
                ele = ele / 10;
                temp++;
            }
            if(temp % 2 == 0){
                count++;
            }
        }
        return count;
    }
};