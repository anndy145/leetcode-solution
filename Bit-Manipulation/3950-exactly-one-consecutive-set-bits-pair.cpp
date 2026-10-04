class Solution {
public:
    bool consecutiveSetBits(int n) {
        int x = n & (n >> 1);
        int count = 0;

        while (x != 0) {
            if ((x & 1) == 1) {
                count++;
            }
            x >>= 1;
        }

        return count == 1;
    }
};