# 231. Power of Two 

**Difficulty:** easy
**Topic:** Math / Bit Manipulation / Recursion

**題目連結:** [LeetCode](https://leetcode.com/problems/power-of-two)

## 題目意思 and 限制

return N是否是2的指數

1. `-2^31 <= n <= 2^31 - 1`

**Example**

Input: `n = 3`
Output: `false`

## 解法
```
return ((n > 0 ) 和 n and n-1 出來是不是0)
```
## 複雜度

**Time Complexity: $O(\log(N))$**  
**Space Complexity: $O(1)$**

## Note
這題跟342 差不多，只是只要判斷到n > 0 和 n 和 n-1 and 出來是不是0
[LeetCode 342](https://leetcode.com/problems/power-of-four)