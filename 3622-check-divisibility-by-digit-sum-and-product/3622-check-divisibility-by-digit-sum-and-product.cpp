class Solution {
public:
    bool checkDivisibility(int n) {
        int origi = n;
        int sum = 0;
        int mul = 1;
        while(n > 0){
            sum += n%10;
            mul *= n%10;
            n/=10;
        }
        return origi % (sum + mul) == 0;
    }
};