class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int start = 0;
        int end = n - 1;
        while(start < end){
            int t = numbers[start] + numbers[end];
            if(t == target){
                return {start + 1, end + 1};
            }
            else if(t < target){
                start++;
            }
            else{
                end--;
            }
        }
        return {-1, -1};
    }
};