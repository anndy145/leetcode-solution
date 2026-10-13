# 121. Best Time to Buy and Sell Stock

**Difficulty:** Easy  
**Topic:** Array, Greedy Algorithm

**題目連結:** [LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)

## 題目意思 and 限制

給一個array代表每天的股票價格，只能先買後賣，輸出最大利潤，如果沒有利潤，輸出0

1. `1 <= prices.length <= 10^5`  
2. `0 <= prices[i] <= 10^4`  

**Example**

Input: `[7,1,5,3,6,4]`
Output: `5`
Input: `[7,6,4,3,1]`
Output: `0`

## 解法

```
第一天當最低價格
利潤 = 0
用迴圈記錄從頭開始遍歷
    如果發現目前價格低於最低價格
        最低價格=今天價格
    如果發現(今天價格-最低價格)　> 利潤
        利潤 = 今天價格-最低價格
return 利潤
```

## 複雜度

**Time Complexity: $O(n)$**  
**Space Complexity: $O(1)$**

## Note