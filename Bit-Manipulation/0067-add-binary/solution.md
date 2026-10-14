# 67. Add Binary

**Difficulty:** Easy
**Topic:** Bit Manipulation / String

**題目連結:** [LeetCode](https://leetcode.com/problems/add-binary)

## 題目意思 and 限制

給兩個二進位，return 他們二進位相加

1. `1 <= a.length, b.length <= 10^4`
2. `a` 和 `b` 只會有 0 或 1 
3. 除了 0 以外，不會有0開頭

**Example**

Input: `a = "1010", b = "1011"`

Output: `10101`

## 解法
```
進位 = 0
當進位和a,b都不為0時
    取a,b最右邊的一位數
    sum = 進位 + a + b
    bit = sum % 2 
    進位 = sum / 2
    a,b 去掉一位
```

## 複雜度

**Time Complexity: $O(n^2)$**  
**Space Complexity: $O(n)$**



## Note
也可以先push到最後反轉
result.push_back(bit);
reverse(result.begin(), result.end());
pors: 字串不用每次都移動，只要差到最後就好