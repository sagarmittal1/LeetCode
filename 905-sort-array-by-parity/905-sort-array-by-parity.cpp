class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> odd, even;
        
        for(auto num : nums) {
            if(num%2) {
                odd.push_back(num);
            }else{
                even.push_back(num);
            }
        }
        
        for(auto num : odd) {
            even.push_back(num);
        }
        
        return even;
    }
};