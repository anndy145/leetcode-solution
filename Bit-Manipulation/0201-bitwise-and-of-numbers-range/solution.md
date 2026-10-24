# 201. Bitwise AND of Numbers Range 

**Difficulty:** Medium
**Topic:** Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/bitwise-and-of-numbers-range)

## 題目意思 and 限制

從left AND 到 right(找出共同前綴 Common Prefix)

1. `0 <= left <= right <= 231 - 1`

**Example**

Input: `left = 1, right = 2147483647`
Output: `0`

## 解法
```
只要兩個數字還不一樣
    就把們最右邊的位元砍掉
    index 紀錄砍了幾次
往左推回index次
```
## 複雜度

**Time Complexity: $O(\log(N))$**  
**Space Complexity: $O(1)$**

## Note
找出共同前綴 Common Prefix