class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                if(isalpha(s[i]) and isupper(s[i])) {
                    s[i] = tolower(s[i]);
                }
                str.push_back(s[i]);
            }
        }
        
        int l = 0, r = str.size()-1;
        while(l < r) {
            if(str[l] != str[r]) {
                return false;
            }
            l++; r--;
        }
        
        return true;
    }
};