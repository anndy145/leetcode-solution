# 42. Trapping Rain Water

## 這樣會TLE

**Difficulty:**  Hard  
**Topic:** Array / Two pointers / Dynamic Programming

**題目連結:** [LeetCode](https://leetcode.com/problems/trapping-rain-water/)

## 題目意思 and 限制



1. `n == height.length`
2. `1 <= n <= 2 * 10^4`
3. `0 <= height[i] <= 10^5`

**Example**

Input: `height = [4,2,0,3,2,5]`  
Output: `9`

## 解法
v1:  
```
result = 0
找到最高的地方
從最底層開始找可以裝水的，找到result就+1
再繼續找下一層
直到找到最高
```

## 複雜度
### V1(從最底層開始找可以裝水的)
**Time Complexity: $O(n*h)$ ，n 是輸入的長度,h是有幾層**   
**Space Complexity: $O(1)$**


## Note
這樣會TLE