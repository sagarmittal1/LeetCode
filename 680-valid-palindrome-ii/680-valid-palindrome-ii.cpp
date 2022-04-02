class Solution {
public:
    bool isPalin(string s, int x, int y) {
        int l = x, r = y;
        while(l < r) {
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l = 0, r = s.size()-1;
        
        while(l < r) {
            if(s[l] == s[r]) {
                l++; r--;
            }else{
                return isPalin(s, l+1, r) or isPalin(s, l, r-1);
            }
        }
        return true;
    }
};