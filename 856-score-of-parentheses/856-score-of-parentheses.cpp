class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        stack <int> st;
        
        for(char c : s) {
            if(c == '(') {
                st.push(0);
            }else{
                int temp = 0;
                while(st.top() != 0) {
                    temp += st.top();
                    st.pop();
                }
                temp = max(2*temp, 1);
                st.pop();
                st.push(temp);
            }
        }
        
        while(!st.empty()) {
            score += st.top();
            st.pop();
        }
        return score;
    }
};