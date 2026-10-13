# 195. Tenth Line

**Difficulty:** Easy  
**Topic:** shell

**題目連結:** [LeetCode](https://leetcode.com/problems/tenth-line)

## 題目意思 and 限制

輸出file.txt 第 10 行

**Example**

Assume that file.txt has the following content:

Line 1  
Line 2  
Line 3  
Line 4  
Line 5  
Line 6  
Line 7  
Line 8  
Line 9  
Line 10  


Output: `Line 10`

## 解法
```
sed -n '10p' file.txt
sed -n '10{p;q}' file.txt
```
## Note
**sed**  
sed 是 Linux 中自動化處理與轉換文字的工具
```
sed [選項] '動作' [輸入檔案]
[選項]
-n 關閉預設的自動列印 (搭配'數字p'，只印出'數字'那行)
-e
-i
-r -E 啟用延伸正規表示法
'動作'
1. 文字修改動作
's' 取代字串，            用法:sed 's/A/B/g'     (將 A 取代為 B)
'd' 刪除指定行，          用法:sed '/測試/d'     (只要這行有「測試」兩個字就整行刪除)
'a' 在指定行後面新增一行， 用法:sed '3a 這是新行' (在第 3 行的下方插入文字)
'i' 在指定行前面插入一行， 用法:sed '3i 這是新行' (在第 3 行的上方插入文字)
'c' 整行取代（取代舊行），  用法:sed '2c 新內容'   (直接把第 2 行的原本內容，整行換成「新內容」)
'y' 逐字轉換（一對一對應），用法:sed 'y/abc/ABC/'  (把所有的 a 換成 A、b 換成 B、c 換成 C)
2. 顯示與流程控制動作
'p' 列印指定行，    用法: sed -n '/關鍵字/p' (通常配合 -n 使用，只把符合條件的行印出來。)
'q' 提早結束、退出，用法: sed '10q'          (處理到第 10 行就立刻收工退出，後面的檔案內容不再讀取)
'=' 印出目前行號，  用法: sed -n '/error/='  (只印出含有 error 關鍵字的那一行「它的行號是多少」。)
3. 進階檔案讀寫動作
'w' 將符合的行寫入新檔案，用法: sed -n '/密碼/w password.txt' (把有「密碼」的行挑出來，存進 password.txt)
'r' 讀取並插入外部檔案  ，用法: sed '5r append.txt' file.txt (在 file.txt 的第 5 行後面，把 append.txt 的完整內容塞進去。)
[輸入檔案]
```