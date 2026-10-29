# 476. Number Complement 

**Difficulty:** easy
**Topic:** Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/number-complement/)

## 題目意思 and 限制

找出num 的二進為complemnet

1. `1 <= num < 231`


**Example**

Input: `num = 5`
Output: `2`

## 解法
```
做一個跟num bit數一樣的 mask
兩個XOR
```
## 複雜度

**Time Complexity: $O(\log(n))$**  
**Space Complexity: $O(1)$**

## Note
找complement就是和mask XOR