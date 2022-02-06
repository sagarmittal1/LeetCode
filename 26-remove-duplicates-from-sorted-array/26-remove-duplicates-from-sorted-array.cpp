class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> st;
        
        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        
        int ptr = 0;
        for(auto it : st) {
            nums[ptr++] = it;
        }
        
        return ptr;
    }
};