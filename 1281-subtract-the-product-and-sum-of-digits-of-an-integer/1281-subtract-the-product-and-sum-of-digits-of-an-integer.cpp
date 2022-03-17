class Solution {
public:
    int subtractProductAndSum(int n) {
        long long mult = 1, add = 0;
        while(n != 0) {
            int x = n%10;
            mult *= x;
            add += x;
            n /= 10;
        }
        return mult-add;
    }
};