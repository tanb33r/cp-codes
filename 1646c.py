from itertools import combinations
from math import factorial

f =[ factorial(i) for i in range(15)]

t= int(input())
for _ in range(t):
    n= int(input())
    ans = 100
    for i in range(15):
        for j in combinations(f,i):
            s = n- sum(j)
            if s>= 0:
                ans = min (ans, (i + bin(s).count('1')))
    print(ans)