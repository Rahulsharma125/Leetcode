class Solution {
public:

    bool allZero(vector<int> &counter){
        for(int &i : counter){
            if(i != 0){
                return false;
            }
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = p.size();
        vector<int> counter(26, 0);
        for(int i=0; i<n; i++){
            char ch = p[i];
            counter[ch-'a']++;
        }
        int i=0, j=0;
        int k = s.size();
        vector<int> ans;
        while(j < k){
            counter[s[j]-'a']--;
            if(j - i + 1 == n){
                if(allZero(counter)){
                    ans.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};