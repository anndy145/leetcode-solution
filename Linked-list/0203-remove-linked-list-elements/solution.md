# 203. Remove Linked List Elements

**Difficulty:** Easy  
**Topic:** Linked List

**題目連結:** [LeetCode](https://leetcode.com/problems/remove-linked-list-elements)

## 題目意思 and 限制

給 `head` 和 `val`，移除linked list 中 `val` 所有元素，回傳新的 `head`  
1. ` 0 <= 節點數量 <= 10^4`  
2. `1 <= Node.val <= 50`  
3. `0 <= val <= 50`

**Example**

Input: `head = [1,2,6,3,4,5,6], val = 6`

Output: `[1,2,3,4,5]`

## 解法
```
先用dummy指向head
如果目前的節點是要移除的話  
   prev的next指向curr的next
   curr指向prev的next
否則
    prev指向curr
    curr 指向下一個
```

## 複雜度

**Time Complexity: O(n)**

**Space Complexity: O(1)**

## Note
用dummy是因為有可能要移除head節點，如果沒有 dummy，就必須另外寫刪除 head 的情況

C要用
```C
struct ListNode dummy = {0};
free(ptr);
```
C++要用
```C++
ListNode dummy(0);
delete ptr;
```