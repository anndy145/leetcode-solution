class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {

            int minindex = i;

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[j] < nums[minindex]) {
                    minindex = j;
                }
            }

            // 找完之後才交換
            swap(nums[i], nums[minindex]);

        }
        return nums;
    }
};

// Selection sort
// O(n^2)