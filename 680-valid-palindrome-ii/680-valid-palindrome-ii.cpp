class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size()-1;
        int ans = 0;
        
        while(l < r) {
            if(s[l] != s[r]) {
                l++;
                ans++;
            }else{
                l++; r--;
            }
        }
        
        if(ans <= 1) return true;
        
        l = 0, r = s.size()-1, ans = 0;
        while(l < r) {
            if(s[l] != s[r]) {
                r--;
                ans++;
            }else{
                l++; r--;
            }
        }
        
        if(ans <= 1) return true;
        return false;
        
    }
};