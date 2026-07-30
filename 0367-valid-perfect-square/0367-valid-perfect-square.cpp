class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = num / 2;
        if(num == 1) return true;
        for(long long i=0; i<=n; i++){
            if((i*i) == num){
                return true;
            }
        }
        return false;
    }
};