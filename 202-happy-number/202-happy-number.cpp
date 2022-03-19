class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int,int> mp;
        int temp = 0;
        
        while(n != 1) {
            while(n != 0) {
                temp += (n%10)*(n%10);
                n /= 10;
            }
            if(mp[temp] != 0) return false;
            mp[temp]++;
            n = temp;
            temp = 0;
        }
        return true;
    }
};