# 78. Subsets

**Difficulty:** Medium
**Topic:** Array 

**題目連結:** [LeetCode](https://leetcode.com/problems/subsets)

## 題目意思 and 限制

給一個sets，輸出所有元素的可能的子集合

1. `1 <= nums.length <= 10`
2. `-10 <= nums[i] <= 10`
3. `nums` 都是unique的

**Example**

Input: `nums = [1,2,3]`

Output: `[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]`

## 解法

雙迴圈，一個一個慢慢插入

## 複雜度

**Time Complexity: $O(n × 2ⁿ)$**  
**Space Complexity: $O(n × 2ⁿ)$**