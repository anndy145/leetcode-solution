class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1)
            return 1;
        int dp1 = 1; //前
        int dp2 = 1; //後
        for (int i = 2; i <= n; i++){
            int curr = dp1 + dp2;
            dp2 = dp1;
            dp1 = curr;
        }
        //因為題目指要求回傳爬到n階所需步數，不用存整個陣列
        //space complexity: O(1)
        return dp1;
    }
};