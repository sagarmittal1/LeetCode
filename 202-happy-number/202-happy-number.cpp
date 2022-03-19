class Solution {
public:
    bool isHappy(int n) {
        set <int> st;
        
        while(true) {
            int total = 0;
            while(n != 0) {
                total += (n%10)*(n%10);
                n /= 10;
            }
            if(total == 1) {
                return 1;
            }
            if(st.find(total) != st.end()) return false;
            st.insert(total);
            n = total;
        }
        return false;
    }
};