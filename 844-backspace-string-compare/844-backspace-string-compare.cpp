class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> ss, tt;
        
        for(char c : s) {
            if(c == '#') {
                if(ss.size()) ss.pop();
            }else{
                ss.push(c);
            }
        }
        
        for(char c : t) {
            if(c == '#') {
                if(tt.size()) tt.pop();
            }else{
                tt.push(c);
            }
        }
        
        return ss == tt;
    }
};