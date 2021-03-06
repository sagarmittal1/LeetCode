class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0, r = height.size() - 1;
        
        while(l < r) {
            int area = (min(height[l], height[r]) * (r-l));
            ans = max(ans, area);
            
            if(height[l] < height[r]) {
                l++;
            }else if(height[l] > height[r]){
                r--;
            }else{
                l++; r--;
            }
        }
        
        return ans;
    }
};