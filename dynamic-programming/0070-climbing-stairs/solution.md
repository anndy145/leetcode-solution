#70.Climbing Stairs

**Difficulty:** Easy  
**Topic:** Dynamic Programming

**題目連結:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## 題目意思 and 限制

輸入要走n階，一次爬一階或兩階，回傳所有組合數量 

`1 <= n <= 45`

**Example**

Input: `n = 2`

Output: `2`

## 解法

```

```

## 複雜度
### v1 (DP):  
**Time Complexity: O(n)**  
**Space Complexity: O(n)**

### v2 (只存需要的變數):
**Time Complexity: O(n)**  
**Space Complexity: O(1)**

### v3 (矩陣快速冪):
**Time Complexity: $O(\log n)$**  
**Space Complexity: O(1)**

## Note
### fibonacci   
矩陣快速冪  
v1:預設 0 階和1階有1種方式,使用dynamic programmmimg,爬到 n 階有 [n - 1] + [n - 2]種方式  
v2:觀察到是費式數列，只存所需要的變數，不用存到整個陣列  
v3:矩陣快速冪  

**Time Complexity: $O(k^3 \log n)$**  當是fib時,k = 2 ->  $O(\log n)$ 
**Space Complexity: $O(k^2)$** 當是fib時,k = 2 ->  $O(1)$ 

1.  
相鄰兩項:
$$\begin{bmatrix} f(n) \\ f(n-1) \end{bmatrix} = \begin{bmatrix} 1 & 1 \\ 1 & 0 \end{bmatrix} \begin{bmatrix} f(n-1) \\ f(n-2) \end{bmatrix}$$
n-1次:  
$$\begin{bmatrix} f(n) \\ f(n-1) \end{bmatrix} = \begin{bmatrix} 1 & 1 \\ 1 & 0 \end{bmatrix}^{n-1} \begin{bmatrix} f(1) \\ f(0) \end{bmatrix}$$

2.  二進位快速冪算法  
e.g. $$a^{13} = a^8 \cdot a^4 \cdot a^1$$