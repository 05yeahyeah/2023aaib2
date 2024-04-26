# week10-1.py
N = int(input('請輸入N:'))
# 以前是用for迴圈寫，今天用'函式呼叫函式'來寫
def func(n):
  if n==1: return 1 # 終止條件，像數學歸納法N=1成立
  return n * func(n-1)
ans = func(N)
print(ans)