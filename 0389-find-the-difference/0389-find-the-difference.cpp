class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int one = 0;
        while(one < t.size()){
            if(s[one] != t[one]){
                return t[one];
            }
            one++;
        }
        return {};
    }
};