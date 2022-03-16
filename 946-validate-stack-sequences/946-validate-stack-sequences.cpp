class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> st;
        int x = 0;
        
        for(int i = 0; i < pushed.size(); i++) {
            st.push(pushed[i]);
            while(st.size() and st.top() == popped[x]) {
                st.pop();
                x++;
            }
        }
        
        return st.size() == 0;
    }
};