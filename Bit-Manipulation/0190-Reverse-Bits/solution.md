# 190. Reverse Bits

**Difficulty:** Easy
**Topic:**   Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/reverse-bits)

## 題目意思 and 限制

把n的二進位反轉過來，輸出十進位

1. `0 <= n <= 2^31 - 2`
2. `n 是偶數`

**Example**

Input: `n = 2147483644`  
Output: `1073741822`

## 解法

```
取n最右邊的bit
result 左移
推到result裡面
result 右移
```

## 複雜度

**Time Complexity: $O(?)$**  
**Space Complexity: $O(?)$**