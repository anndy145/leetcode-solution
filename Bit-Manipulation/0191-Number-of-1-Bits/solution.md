# 191. Number of 1 Bits 

**Difficulty:** Easy 
**Topic:** Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/number-of-1-bits)

## 題目意思 and 限制

數n換成二進位總共有幾個1

1. `1 <= n <= 2^31 - 1`


**Example**

Input: `128`

Output: `1`

## 解法
```
從最右邊and 1，
如果是1
    count ++
```
## 複雜度

**Time Complexity: $O(\log(n))$**  
**Space Complexity: $O(1)$**

## Note
Hamming weight 漢明權重
