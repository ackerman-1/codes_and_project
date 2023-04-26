import math


def Power(n):
    ans, x = 1, 2
    while (n != 0):
        if (n & 1 == 1):
            ans = ans*x
        x = x*x
        ans = ans >> 1
    return ans


for _ in range(int(input())):
    n = int(input())
    ans = 0
    temp = 1
    for i in range(31, -1, -1):
        if (n >> i & 1 == 1):
            ans = 1 << i
            if (i != 0):
                temp = 1 << (i-1)
            break
    print(max(n-ans+1, temp))
