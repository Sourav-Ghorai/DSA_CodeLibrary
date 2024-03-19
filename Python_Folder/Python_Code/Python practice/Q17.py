import math
p = int(input("Enter principle: "))
r = int(input("Enter interest: "))
t = int(input("Enter time: "))
n = 1 + r/100
x = p * (math.pow(n,t))
print(x)
