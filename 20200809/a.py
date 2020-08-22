import math
n = int(input())
a = []
for i in range(n):
    a.append(float(input()) * 10 ** 9)

cnt = 0
for i in range(n):
    for j in range(i + 1, n):
        if (((a[i] * a[j]) / 10 ** 18).is_integer()):
            cnt += 1
print(cnt)
