class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return;
        
        int idx = n-2;
        for(int i = n-1; i >= 1; i--) {
            if(nums[idx] < nums[i]) {
                break;
            }else{
                idx--;
            }
        }
        
        if(idx == -1) {
            int l = 0, r = n-1;
            while(l < r) swap(nums[l++], nums[r--]);
        }else{
            int xx = INT_MAX, pos = -1;
            for(int i = idx+1; i < n; i++) {
                if(nums[i] > nums[idx] and nums[i] == min(xx, nums[i])) {
                    xx = min(xx, nums[i]);
                    pos = i;
                }
            }
            swap(nums[idx], nums[pos]);
            sort(nums.begin()+idx+1, nums.end());
        }
    }
};