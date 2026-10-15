# 342. Power of Four 

**Difficulty:** Easy 
**Topic:** Math / Bit Manipulation

**題目連結:** [LeetCode](https://leetcode.com/problems/power-of-four)

## 題目意思 and 限制

輸入的數字是4的指數嗎

1. `-2^31 <= n <= 2^31 - 1`

**Example**

Input: `n = 16`  
Output: `true`

## 解法
```
if n < 0
    return false
先判斷是否為 2 的次方(n 和 n-1 and 出來是不是0) 
再排除不是 4 的次方的數字(n-1 是不是 3 的倍數)
```


## 複雜度

**Time Complexity: $O(1)$**  
**Space Complexity: $O(1)$**

## Note
條件2:  
1. $2^k$   
```
e.g. n = 16, n - 1 = 15  
===================
    n     = 10000  
    n - 1 = 01111
-------------------
AND         00000
```

2. 條件3:  
$2^k \bmod 3 = 1$   
因為前面已經排除了非2的指數，所以只要判斷n-1是不是3的倍數就好。  
由此可以繼續推論2的倍數的指數，甚至推到其他底數。(基礎數論)  
### 公式: $a^k \ mod \ (a^b-1) = 1 ⟺ b|k$