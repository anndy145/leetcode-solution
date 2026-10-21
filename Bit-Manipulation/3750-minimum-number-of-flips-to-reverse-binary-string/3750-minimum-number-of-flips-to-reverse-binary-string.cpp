class Solution {
public:
    int minimumFlips(int n) {
        int temp = n;
        int reverse = 0;
        while(temp != 0){
            int bit = temp & 1;
            reverse <<= 1;
            reverse |= bit;
            temp >>= 1;
        }
        int count = 0;
        int diff = n ^ reverse;
        while(diff != 0){
            if(diff % 2 == 1)
                count++;
            diff >>= 1;
        }
        
        return count;
    }
};