# 122. Best Time to Buy and Sell Stock II 

**Difficulty:** Medium
**Topic:** Array / Dynamic Programming / Greedy

**題目連結:** [LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii)

## 題目意思 and 限制

給一串價格，每天最多只能持有一股只能先買後賣，輸出最大利益

1. `1 <= prices.length <= 3 * 10^4`
2. `0 <= prices[i] <= 10^4`


**Example**

Input: `prices = [7,1,5,3,6,4]`
Output: `7`

## 解法
```
從頭掃到尾，如果後項減掉前項>0
result += 後項減掉前項;
return result
```
## 複雜度

**Time Complexity: $O(n)$**  
**Space Complexity: $O(1)$**

## Note
如果要最大化利益，就要只買低點賣高點，也就是只買股票綠色的部分(綠漲紅跌)，也就是說只要前項-後項 > 0 就+到result裡面，就會是最大得到的利益，謝謝leetcode discussion的大佬:https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/comments/1566137/  ，讓我一看就懂。  
Thanks to this guy's hint let me understand how to do this problem.
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/comments/1566137/