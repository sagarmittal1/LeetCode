class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set <int> st;
        
        for(auto num : nums) {
            if(st.find(num) != st.end()) {
                st.erase(num);
            }else{
                st.insert(num);
            }
        }
        
        return *(st.begin());
    }
};