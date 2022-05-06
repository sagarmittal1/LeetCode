class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack <pair<char, int>> st;
        if(s.size() < k) return s;
        
        for(int i = 0; i < s.size(); i++) {
            if(st.empty() or st.top().first != s[i]) {
                st.push({s[i], 1});
            }else{
                int xx = st.top().second;
                st.pop();
                st.push({s[i], xx+1});
            }
            if(st.top().second == k) st.pop();
        }
        
        string ans = "";
        while(st.size() != 0) {
            int x = st.top().second;
            char c = st.top().first;
            st.pop();
            while(x--) ans.push_back(c);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};