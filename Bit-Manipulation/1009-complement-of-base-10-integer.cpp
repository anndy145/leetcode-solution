class Solution {
public:
    int bitwiseComplement(int n) {
        int total = 0;
        int k = n;
        if(n == 0)
            return 1;
        while (k != 0) {
            total++;
            k = k / 2;
        }
        // total 是有幾個bit
        int result = 0;
        for(int i = 0;i < total;i++){
            k <<= 1;
            k = k | 1;
        }

        return k ^ n;
    }
};