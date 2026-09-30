class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int index = 0;
        while(left != right){
            left = left >> 1;
            right = right >> 1;
            index++;
        }
        int result = left;
        result = result << index;
        return result;
    }
};

//右移直到相同 並記錄右移index次 return (左移index次)