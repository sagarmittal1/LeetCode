class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        if(s == goal) {
            unordered_map <char, int> mp;
            for(char c : s) mp[c]++;
            
            bool chk = false;
            for(auto it : mp) {
                if(it.second >= 2) {
                    chk = true;
                    break;
                }
            }
            
            if(chk) {
                return true;
            }else{
                return false;
            }
        }
        
        vector <int> diff;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != goal[i]) diff.push_back(i);
        }
        
        if(diff.size() == 2) {
            swap(s[diff[0]], s[diff[1]]);
            if(s == goal) return true;
        }
        
        return false;
    }
};