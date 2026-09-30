class Solution {
public:
    int hammingWeight(int n) {
        int total = 0;

        while (n != 0) {
            n = n & (n - 1);
            total++;
        }

        return total;
    }
};

//題目:數有幾個1
//n & 1 比較最右邊的bit and 出來是1的話total + 1
