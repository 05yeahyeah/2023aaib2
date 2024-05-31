class Solution: # week15-1.py Leetcode 3158 要找出現2次
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table = {} # 大括號: table[num] 對應的次數
        for num in nums: # 每個數字輪一次
            if num in table: #出現過的話
                table[num] += 1 #次數+1
            else:
                table[num] = 1 # 第1次出現
        print(table)
        # print(table) #答案還沒算出來
        ans = 0
        for num in table: # 把 table 裡全部的數字輪一次
            if table[num] == 2:
                ans = ans ^ num
        return ans

        