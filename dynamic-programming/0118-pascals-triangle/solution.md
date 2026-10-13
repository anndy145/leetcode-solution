# 118. Pascal's Triangle

**Difficulty:** Easy  
**Topic:** array, Dynamic Programming

**題目連結:** [LeetCode](https://leetcode.com/problems/pascals-triangle)

## 題目意思 and 限制

給 `numRows`，return 1 ~ n 所有list  
1. `1 <= numRows <= 30`


**Example**

Input: `numRows = 5`

Output: `[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]`

## 解法

一個一個慢慢加
[0] = 1;[i] = 1;
[i, j] = [i - 1][j - 1] + [i - 1][j]


## 複雜度

**Time Complexity: $O(n^2)$**

**Space Complexity: $O(n^2)$**



## Note
