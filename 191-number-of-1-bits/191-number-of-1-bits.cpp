class Solution {
public:
    int hammingWeight(uint32_t n) {
        // isko dobara dekhna he
        int ans = 0;
        while(n) {
            n &= n-1;
            ans++;
        }
        return ans;
    }
};