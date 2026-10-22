# 338. Counting Bits 

**Difficulty:** easy
**Topic:** Dynamic Programming / Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/counting-bits)

## 題目意思 and 限制

輸出從0到n 所有數二進位 1 的數量

1. `0 <= n <= 10^5`

**Example**

Input: `n = 5`
Output: `[0,1,1,2,1,2]`

## 解法
```
去掉最後一位 + 最後1bit and 1
```
## 複雜度

**Time Complexity: $O(n)$**  
**Space Complexity: $O(1)$**

## Note
dynamic programming 用偶數/2來想
e.g. 6 / 2 = 3 
ans[1] = 0 + 1 & 1 = 1
ans[3] = 1 + 1 & 1 = 2
1|001
2|010
3|011
4|100
5|101
6|110
7|111