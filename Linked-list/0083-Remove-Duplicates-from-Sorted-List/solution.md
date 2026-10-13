# 83. Remove Duplicates from Sorted List

**Difficulty:** Easy  
**Topic:** Linked List

**題目連結:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## 題目意思 and 限制

給 `head`，移除linked list 中的重複元素，並保持遞增  
1. ` 0 <= 節點數量 <= 300`  
2. `-100 <= Node.val <= 100`  
3. list 一定保持遞增

**Example**

Input: `[1 → 1 → 2 → 3 → 3]`

Output: `[1 → 2 → 3]`

## 解法

```
使用兩個指標，一個指向目前節點，另一個指向下一個節點，  
if(兩個節點的值相同時) 
    刪除下一個節點  
否則
    移動到下一個節點
```

## 複雜度

**Time Complexity: O(n)**

**Space Complexity: O(1)**