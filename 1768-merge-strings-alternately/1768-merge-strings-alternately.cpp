class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        string ans = "";
        for(int i = 0; i < max(n1,n2); i++) {
            if(i < n1) ans.push_back(word1[i]);
            if(i < n2) ans.push_back(word2[i]);
        }
        return ans;
    }
};