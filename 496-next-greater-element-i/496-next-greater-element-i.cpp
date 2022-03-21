class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector <int> ans(n1);
        unordered_map <int,int> mp;
        
        for(int i = 0; i < n2; i++) mp[nums2[i]] = i;
        
        for(int i = 0; i < n1; i++) {
            auto it = mp.find(nums1[i]);
            bool find = false;
            for(int j = it->second; j < n2; j++) {
                if(nums2[j] > nums1[i]) {
                    ans[i] = nums2[j];
                    find = true;
                    break;
                }
            }
            if(!find) ans[i] = -1;
        }
        return ans;
    }
};