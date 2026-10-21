# 3750. Minimum Number of Flips to Reverse Binary String

**Difficulty:** Easy 
**Topic:** Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string)

## 題目意思 and 限制

給一個數n，找出前後反轉他二進位不同的bit的數量

1. `1 <= n <= 10^9`

**Example**

Input: `n = 7`

Output: `0`

## 解法

```
取最右邊的bit，加到reverse，reverse * 2
原本的數/2
全部做完後XOR，有1就count++
return count
```

## 複雜度

**Time Complexity: $O(log(n))$**  
**Space Complexity: $O(1)$**



## Note

