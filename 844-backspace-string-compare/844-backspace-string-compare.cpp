class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> ss, tt;
        
        for(auto it:s) {
            if(it == '#') {
                if(ss.size() != 0) {
                    ss.pop();
                } 
            }else{
                ss.push(it);
            }
        }
        
        for(auto it:t) {
            if(it == '#') {
                if(tt.size() != 0) {
                    tt.pop();
                } 
            }else{
                tt.push(it);
            }
        }
        
        if(ss == tt) {
            return true;
        }else{
            return false;
        }
    }
};