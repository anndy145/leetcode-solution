class Solution {
public:
    vector<int> orArray(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> result(n);
        for(int i = 0;i < n;i++){
            result[i] = nums[i] | nums[i + 1];
        }
        return result;
    }
};