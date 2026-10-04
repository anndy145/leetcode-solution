class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1);
        for(int i = 0;i < n;i++){
            count[nums[i]]++;
        }
        int duplicated = 0;
        int miss = 0;
        for(int i = 1;i <= n;i++){
            if(count[i] == 0){
                miss = i;
            }
            if(count[i] == 2)
                duplicated = i;
        }

        //return count;
        vector<int> result;
        result.push_back(duplicated);
        result.push_back(miss);
        return result;
    }
};

/*
for(int i = 1;i <= n;i++){

        }
n = nums.size()

建立大小 n + 1 的 count
全部初始化為 0

for nums 裡的每個數字:
    count[nums[i]]++

for i = 1 到 n:
    如果 count[i] == 2:
        duplicate = i

    如果 count[i] == 0:
        missing = i

return [duplicate, missing]
*/