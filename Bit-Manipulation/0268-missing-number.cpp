class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nSize = nums.size();
        int sum = 0;
        for(int i = 0;i < nSize;i++){
            sum = sum + i - nums[i];
        }

        return sum + nSize;
    }
};