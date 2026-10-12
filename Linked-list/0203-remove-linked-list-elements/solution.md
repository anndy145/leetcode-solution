# 83. Remove linked list elements

**Difficulty:** Easy  
**Topic:** Linked List

**題目連結:** [LeetCode](https://leetcode.com/problems/remove-linked-list-elements)

## 題目意思

移除linked list 中的特定元素

**Example**

Input: head = [1,2,6,3,4,5,6], val = 6

Output: [1,2,3,4,5]

## 解法

先用dummy指向head，如果目前的節點是要移除的話，prev指向curr的next，並指向prev的next，否則prev指向curr，curr 指向下一個

## 複雜度

**Time Complexity: O(n)**

**Space Complexity: O(1)**

## Note
用dummy是因為有可能要移除head節點，如果沒有 dummy，就必須另外寫刪除 head 的情況