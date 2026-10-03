class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int result = 0;


        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                nums[i] = 0;
            }
            result |= nums[i];
        }
        return result;
    }
};